#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Conta.cpp"

using namespace std;

void ExibeSaldo(Conta conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}


int main(){

  
    
    Conta conta1("123456","Riquelme Batista","000.000.000-12");
    conta1.depositar(1000);
    ExibeSaldo(conta1);
    cout<<conta1.olharCpfTitular()<<endl;
    cout<<conta1.olharNomeTitular()<<endl;
    cout<<conta1.olharNumeroConta()<<endl;

    Conta conta2("000","Larissa","09884494-00");
    conta1.depositar(1000);
    ExibeSaldo(conta2);
    cout<<conta2.olharCpfTitular()<<endl;
    cout<<conta2.olharNomeTitular()<<endl;
    cout<<conta2.olharNumeroConta()<<endl;

    cout<<"Número de Contas do Banco : "<<conta2.numeroDeContas<<endl;

    
    










    return 0;
}