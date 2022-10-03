//Definição da Classe Conta

#pragma once
#include<string>
#include "Titular.hpp"

class Conta{
public:
static int numeroDeContas;
private:
    std::string numeroConta;
    Titular titular;
    float saldo;

public:
    Conta(std::string numero,Titular titular);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float olharSaldo() const; //Esse método não modifica nada , por isso usei o const 
    std::string olharNumeroConta();
    

    
    


};







