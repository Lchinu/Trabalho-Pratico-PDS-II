// Definição da Classe Conta

#pragma once
#include <string>
#include "Titular.hpp"
lass Conta{
    protected:
        Titular titular;
        float saldo;
        virtual float taxaSaque(){
        	return 0.05;
		}
    public:
        Conta(Titular t) : titular(t){saldo = 0;}
        virtual void realizaSaque(float valorSaque);
        void realizaDeposito(float valorDeposito);
        float get_saldo(){return saldo;}
        void imprimeSaldo(){
        	cout << "Saldo de " << titular.get_nome() << ": " << saldo << " reais." << endl;
		}
        void transfere(string userDestino, float valor, map<string,Conta*>contas);
        ~Conta(){cout << "Conta encerrada." << endl;}
        Titular* get_titular(){
            return &titular;
        }
};
