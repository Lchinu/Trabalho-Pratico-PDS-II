//Implementação da Classe Conta

#include "Conta.hpp"
#include<iostream>
#include<string>

int Conta::numeroDeContas=0;

Conta::Conta(std::string Numero,std::string Titular,std::string Cpf){
    this->numeroConta=Numero;
    this->nomeTitular=Titular;
    this->cpfTitular=Cpf;
    this->saldo=0;
    numeroDeContas++;
}


void Conta::sacar(float valorASacar){
    if(valorASacar<0){
        std::cout<<"Impossível sacar valores negativos"<<std::endl;
    }

    if(saldo<valorASacar){
        std::cout<<"Saldo insuficiente"<<std::endl;
    }
    
        saldo=saldo-valorASacar;
}

void Conta::depositar(float valorADepositar){
    if(valorADepositar<0){
        std::cout<<"Impossível depositar valores negativos"<<std::endl;
    }
    saldo=saldo+valorADepositar;
    
}

float Conta::olharSaldo() const  { //Esse método não modifica nada por isso usei o const
    return saldo;
}
std::string Conta::olharNomeTitular(){
    return nomeTitular;
}
std::string Conta::olharCpfTitular(){
    return cpfTitular;
}
std::string Conta::olharNumeroConta(){
    return numeroConta;
}



 