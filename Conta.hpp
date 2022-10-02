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
    Conta(std::string numero,std::string nome,std::string cpf);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float olharSaldo() const; //Esse método não modifica nada , por isso usei o const 
    std::string olharNomeTitular();
    std::string olharCpfTitular();
    std::string olharNumeroConta();
    

    
    


};