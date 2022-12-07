#include <iostream>

#include "banco.hpp"
#include "conta.hpp"
#include "contaPoupanca.hpp"
#include "cpf.hpp"
#include "pessoa.hpp"
#include "titular.hpp"
#include "contaUniversitaria.hpp"
#include "transacao.hpp"
#include "ExcecaoCpf.hpp"
#include "ExcecaoNegativo.hpp"
#include "ExcecaoSaque.hpp"
#include "ExcecaoTransferencia.hpp"

using namespace std;

int main()
{

    try
    {
        Banco banco;

        Titular t1("Matheus", 23, "13535745632", "mathewsq", "2607");
        ContaUniversitaria c1(t1);
        banco.adicionaConta(c1);

        Titular t2("Riquelme Batista", 22, "12782581678", "Riquelme3m", "1111");
        ContaPoupanca p1(t2);
        banco.adicionaConta(p1);

        Titular t3("Lucas", 20, "11125298618", "lchinu", "2424");
        ContaPoupanca p2(t3);
        banco.adicionaConta(p2);

        Titular t4("Camila", 22, "02374573699", "laranjeira", "1234");
        ContaPoupanca p4(t4);
        banco.adicionaConta(p4);
        
        Titular t5("Joao", 20, "12345678900", "joao", "123");
        ContaPoupanca p5(t5);
        banco.adicionaConta(p5);
        

        Conta *contaLogada = banco.login();

        int operacao = 0;

        do
        {
            try
            {
                operacao = banco.selecionaOperacao();

                banco.realizaOperacao(operacao, contaLogada);

                if (operacao == 5)
                {
                    //system("");
                    contaLogada = banco.login();
                }           
                else if(operacao == 7 || operacao == 0) {
                break;
                }   
              
            }
            catch (ExcecaoNegativo &e)
            {
                cout << e.what() << endl;
                cout << "====================================================================\n";
                cin.get();
            }
            catch (ExcecaoSaque &e)
            {
                cout << e.what() << endl;
                cout << "====================================================================\n";
                cin.get();
            }
            catch (ExcecaoCpf &e)
            {
                cout << e.what() << endl;
                cout << "====================================================================\n";
                cin.get();
            }
            catch (ExcecaoTransferencia &e)
            {
                cout << e.what() << endl;
                cout << "====================================================================\n";
                cin.get();
            }

        } while (operacao != 7);
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
        cout << "====================================================================\n";
        cin.get();
    }
}
