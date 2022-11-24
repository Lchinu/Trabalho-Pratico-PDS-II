#ifndef __CONTABANCARIA_HPP__
#define __CONTABANCARIA_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "titular.hpp"

class Conta{
    protected:
        Titular titular;
        float saldo;
        virtual float taxaSaque();
    public:
        Conta(Titular t);
        virtual void realizaSaque(float valorSaque);
        void realizaDeposito(float valorDeposito);
        float get_saldo();
        void imprimeSaldo();
        void transfere(std::string userDestino, float valor, std::map<std::string,Conta*>contas);
        ~Conta();
        Titular* get_titular();
        void enviaValor(float valor);
        void recebeValor(float valor);
};

#endif