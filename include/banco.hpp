/**
 * @file banco.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe principal do projeto caixa eletrônico.
 * @version 0.1
 * @date 2022-11-25
 * @details A classe banco é responsãvel por organizar as operações que 
 * constituem um caixa eletrônico como um todo e por checar se as contas 
 * realmente existem e cria propriamente o caixa, é a classe principal do projeto. 
 * 
 * 
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __BANCO_HPP__
#define __BANCO_HPP__

#include <iostream>
#include <vector>
#include <string>
#include "conta.hpp"
#include <map>
#include "transacao.hpp"
/**
 * @brief Classe que cria contas e organiza opções escolhidas.
 * @details Implementa ao sistema bancário as contas criadas pelos usuários,
 * além de incrementar as funcionalidades e dar a opção de escolha de uma delas.
 */
class Banco
{
public:
     /**
     * @brief Vetor com os nomes de usuarios existentes, para conferencia no login
     * 
     */
    std::vector<std::string> Users;
    /**
     * @brief Busca uma conta a partir de um nome de usuario existente(ponteiro para conta)
     * 
     */        
    std::map<std::string, Conta *> Contas; 
    /**
     * @brief Registra as transações feitas pelo usuário
     * 
     */
    std::vector<Transacao>transacoes;
    /**
     * @brief Criação do saldo do caixa eletrônico, feito pois os caixas não possuem dinheiro infinito.
     * 
     */
    float saldo;

public:
/**
 * @brief Constrói o objeto Banco.
 * @details Inicia a estrutura do código com o os usuários, tipos de conta 
 * e saldo, assim como as operações disponíveis.
 * 
 */
    Banco();
     /**
     * @brief Adiciona conta criada ao banco, por referência
     * 
     * @param conta Classe conta contendo: dados do usuário, saldo e tipo de conta.
     */
    void adicionaConta(Conta &conta);
/**
     * @brief Criação do sistema de login
     * @details Sistema criado para que seja possível inicar e encerrar sessão em diferentes 
     * tipos de contas.
     * @return Conta*  retorna a conta que foi logada
     */
    Conta *login();
    /**
     * @brief O usuario logado escolhe a operacao que será realzada no caixa eletrônico
     * @details Como existem 7 operações diferentes, é necessário haver uma função para
     * que seja executada uma operação específica.
     * @return int 
     */
    int selecionaOperacao();         
     /**
     * @brief após selecionada a opção desejada, o caixa realiza a operação
     * @details As operações são feitas com base na conta atual logada, diferenciando-se
     * entre os dois tipos existentes.
     * 
     * @param opcao O usuário deve escolher qual opereação deseja realizar
     * @param conta A operação é destinada a conta 
     * @return * void 
     */              
    void realizaOperacao(int opcao, Conta *conta); 
    /**
     * @brief Saldo atual do banco, para não ter dinheiro infinito para saque.
     * 
     * @return float 
     */
    float get_saldo();
    /**
     * @brief Responsável por reunir todas as transações feitas.
     * @details Essa função foi criada especificamente para reunir todas as transações
     * em um único lugar e fornecer maior organização.
     * 
     */
    void imprimeExtrato();
};

#endif