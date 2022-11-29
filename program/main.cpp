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

int main(){
    Banco banco;
	
	Titular t1("Matheus", 23, "13535745632","mathewshq", "2607");
	ContaUniversitaria c1(t1);
    banco.adicionaConta(c1);
    
	Titular t2("Paulo", 22, "12782581678", "pauloh", "8600");
	ContaPoupanca p1(t2);
    banco.adicionaConta(p1);

   
    Conta* contaLogada = banco.login();

    int operacao = 0;
    while(1){
    operacao = banco.selecionaOperacao();

    banco.realizaOperacao(operacao, contaLogada);

    if (operacao == 5){
        system("cls");
        contaLogada = banco.login();
    }else if(operacao == 6 || operacao == 0){
        break;
        }   
    }

return 0;
}
