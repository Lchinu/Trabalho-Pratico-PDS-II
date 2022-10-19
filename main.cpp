#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Conta.cpp"
#include "Titular.hpp"
#include "Titular.cpp"
#include "Cpf.hpp"
#include "Cpf.cpp"
#include "Funcionario.hpp"
#include "Funcionario.cpp"
#include "Pessoa.hpp"
#include "Pessoa.cpp"
#include"ContaPoupanca.hpp"
#include"ContaPoupanca.cpp"
#include"ContaCorrente.hpp"
#include"ContaCorrente.cpp"




using namespace std;

void ExibeSaldo(Conta &conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}

void RealizaSaque(Conta& conta){
    conta.sacar(200);
}

int main(){

    
    Titular titu1(Cpf("145.110.506-19"),"Riquelme Batista");
    Titular titular(Cpf("123.456.789-10"), "Douglas Lima");
    
    ContaPoupanca umaConta("123456", titular);
    ContaCorrente outraConta("00000",titu1);
    outraConta.depositar(100000);
    umaConta.depositar(1000);
    outraConta.depositar(10000);
    outraConta.transferePara(umaConta,10000);
    
   
    ExibeSaldo(umaConta);

    Funcionario funcionario(Cpf("123.456.789-11"),"Riquelme Batista",1000);

  
    
    


   
   
   











    return 0;
}