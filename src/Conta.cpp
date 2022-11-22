//Implementação da Classe Conta
#include "Titular.hpp"
#include "Conta.hpp"
#include<iostream>
#include<string>

int Conta::numeroDeContas=0;


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

    float tarifaDeSaque=valorASacar*0.001;
    float valorDoSaque=valorASacar+tarifaDeSaque;

    if(saldo<valorDoSaque){
        std::cout<<"Saldo insuficiente"<<std::endl;
        exit(1);
    }
    

        saldo=saldo-valorDoSaque;
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


