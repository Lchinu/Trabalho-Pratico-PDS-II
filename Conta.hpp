//Definição da Classe Conta

#pragma once
#include<string>

class Conta{
    private:
   
    std::string numeroConta;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;

    public:

    void sacar(float valorASacar);
    void depositar(float valorADepositar);


};