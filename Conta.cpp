//Implementação da Classe Conta
#include "Titular.hpp"
#include "Conta.hpp"
#include<iostream>
#include<string>

int Conta::numeroDeContas=0;

/*Conta::Conta(std::string Numero,Titular titular){
    this->numeroConta=Numero;
    Titular::titular();
    this->saldo=0;
    numeroDeContas++;
}*/
Conta::Conta(std::string numeroConta, Titular titular):
    numeroConta(numeroConta), 
    titular(titular),
    saldo(0)
{
    numeroDeContas++;
}


void Conta::sacar(float valorASacar){
    if(valorASacar<0){
        std::cout<<"Impossível sacar valores negativos"<<std::endl;
    }

    if(saldo<valorASacar){
        std::cout<<"Saldo insuficiente"<<std::endl;
        exit(1);
    }
    
        saldo=saldo-valorASacar;
}

void Conta::depositar(float valorADepositar){
    if(valorADepositar<0){
        std::cout<<"Impossível depositar valores negativos"<<std::endl;
        exit(1);
    }
    else{
        saldo=saldo+valorADepositar;
    }
}

float Conta::olharSaldo() const  { //Esse método não modifica nada por isso usei o const
    return saldo;
}

std::string Conta::olharNumeroConta(){
    return numeroConta;
}


