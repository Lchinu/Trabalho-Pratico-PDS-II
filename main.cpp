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
#include"Gerente.hpp"
#include "Gerente.cpp"
#include "Atendente.hpp"
#include "Atendente.cpp"
#include"Autenticavel.hpp"
#include"Autenticavel.cpp"




using namespace std;

void ExibeSaldo(Conta &conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}

void RealizaSaque(Conta& conta){
    conta.sacar(200);
}

void FazLogin(Autenticavel& alguem,string senha){
    if(alguem.autentica(senha)){
    std::cout<<"Login realizado"<<std::endl;
    }else{
        std::cout<<"Senha inválida"<<std::endl;
    }
}

int main(){

    
    Titular titu1(Cpf("145.110.506-19"),"Riquelme Batista","Matador123@");
    Titular titular(Cpf("123.456.789-10"), "Douglas Lima","Matador");
    
    ContaPoupanca umaConta("123456", titular);
    ContaCorrente outraConta("00000",titu1);
    outraConta.depositar(100000);
    umaConta.depositar(1000);
    outraConta.depositar(10000);
    outraConta.transferePara(umaConta,10000);
    
   
    ExibeSaldo(umaConta);

   Gerente funcionario(Cpf("123.456.789-11"),"Riquelme Batista",1000,"irfirirf");

  
    
    


   
   
   











    return 0;
}