#include <iostream>

#include "banco.hpp"
#include "conta.hpp"
#include "contaPoupanca.hpp"
#include "cpf.hpp"
#include "pessoa.hpp"
#include "titular.hpp"
#include "contaUniversitaria.hpp"
#include "transacao.hpp"

using namespace std;

int main()
{

    try
    {
        Banco banco;

        Titular t1("Matheus", 23, "13535745632", "mathewshq", "2607");
        ContaUniversitaria c1(t1);
        banco.adicionaConta(c1);

        Titular t2("Riquelme", 22, "12782581678", "riquelmao", "8600");
        ContaPoupanca p1(t2);
        banco.adicionaConta(p1);

        Titular t3("Lucas", 20, "11125298618", "lchinu", "2424");
        ContaPoupanca p2(t3);
        banco.adicionaConta(p2);

        Titular t4("Camila", 22, "02374573699", "laranjeira", "1234");
        ContaPoupanca p4(t4);
        banco.adicionaConta(p4);
        
        

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
                    system("clear");
                    contaLogada = banco.login();
                }           
                else if(operacao == 7 || operacao == 0) {
                break;
                }   
              
            }
            catch (exception &e)
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
