#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Conta.cpp"
#include "Titular.hpp"
#include "Titular.cpp"




using namespace std;

void ExibeSaldo(Conta &conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}


int main(){

    Titular titularexemplo("Riquelme Batista","000.000.111-11");
   Conta umaConta("123456",titularexemplo);











    return 0;
}