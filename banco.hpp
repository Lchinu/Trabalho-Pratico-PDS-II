#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "conta.hpp"
#include <map>
#include "transacao.hpp"



class Banco{    
    public:
        //string nome = "";
        std::vector<std::string>Users; // vetor com os nomes de usuarios existentes, para conferencia no login
        std::map<std::string,Conta*>Contas; // mapa para buscar uma conta a partir de um nome de usuario existente(ponteiro para conta)
        std::vector<Transacao>transacoes;
        float saldo;
    public:
        Banco();
        void adicionaConta(Conta &conta); // adiciona conta criada ao banco, por referência
        Conta* login();
        int selecionaOperacao(); // o usuario logado escolhe a operacao que será realzada no caixa eletrônico
        void realizaOperacao(int opcao, Conta* conta); // após selecionada a opção desejada, o caixa realiza a operação
        float get_saldo();
        void imprimeExtrato();
};