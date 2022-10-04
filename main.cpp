#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Conta.cpp"
#include "Titular.hpp"
#include "Titular.cpp"
#include "Cpf.hpp"
#include "Cpf.cpp"




using namespace std;

void ExibeSaldo(Conta &conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}


int main(){

    
   Titular titularexemplo("Riquelme Batista",Cpf("000.000.000-22"));
   Conta umaConta("123456",titularexemplo);
   umaConta.depositar(10);
   umaConta.sacar(20);
   //ExibeSaldo(umaConta);











    return 0;
}