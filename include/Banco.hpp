#pragma once
#include <string>
#include <vector>
#include <map>
#include "Conta.hpp"

class Banco{    
    public:
        //string nome = "";
        vector<string>Users;
        map<string,Conta*>Contas;
        float saldo;
    public:
        Banco(){
            cout << "Banco criado." << endl;
            saldo = 10000;
        }
        void adicionaConta(Conta &conta);
        Conta* login();
        int selecionaOperacao();
        void realizaOperacao(int opcao, Conta* conta);
        float get_saldo(){
            return saldo;
        }
};
