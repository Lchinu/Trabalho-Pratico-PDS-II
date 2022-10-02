//Implementação da Classe Conta

#include "Conta.hpp"
#include<iostream>

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
        std::cout<<"Impossível sacar valores negativos"<<std::endl;
    }
    saldo=saldo+valorADepositar;
    
}