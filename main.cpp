#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Conta.cpp"

using namespace std;

void ExibeSaldo(Conta conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}


int main(){

  
    
   Conta conta2("123456","Riquelme Batista","000.000.000-12");
    conta2.depositar(1000);
    ExibeSaldo(conta2);
    cout<<conta2.olharCpfTitular()<<endl;
    cout<<conta2.olharNomeTitular()<<endl;
    cout<<conta2.olharNumeroConta()<<endl;

    
    










    return 0;
}