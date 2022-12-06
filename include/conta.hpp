/**
 * @file conta.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe responsável por realizar as operações selecionadas.
 * 
 * @version 0.1
 * @date 2022-11-25
 * @details A classe conta é a responsável por executar as operações selecionadas
 * e criadas na classe banco, aqui o usuário pode ter suas funcionalidades executadas.
 * Também é criada aqui as taxas dos diferentrs tipos de conta.
 * 
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CONTABANCARIA_HPP__
#define __CONTABANCARIA_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "titular.hpp"
/**
 * @brief Classe que direciona as operações criadas na classe banco.
 * @details Cada operação possui suas particularidades e essa classe é responsável por
 * separar cada uma delas e destinar ao usuário logado, o qual é chamado de titular.
 * 
 */
class Conta
{
protected:
/**
 * @brief Vincula o usuário titular a sua conta
 * 
 */
    Titular titular;
       /**
     * @brief Define e cria o saldo do usuário titular
     * 
     */
    float saldo;
      /**
     * @brief Define a taxa a conta logada deve pagar para sacar
     * 
     * @return float 
     */
    virtual float taxaSaque();

public:
/**
 * @brief Construtor do objeto conta
 * @details Responsável por atribuir ao caixa eletrônico as contas e seus dados
 * específicos, assim como a opção de operar as opções.
 * 
 * @param t da conta que foi logada.
 */
    Conta(Titular t);
    /**
     * @brief Realiza um saque da conta logada
     * @details Cada conta realiza um saque que é desontado do float saldo, criado
     * separadamente para cada conta
     * 
     * @param valorSaque Valor escolhido para ser sacado.
     */
    virtual void realizaSaque(float valorSaque);
    /**
     * @brief Realiza um saque da conta logada
     * @details O valor de depósito pode ser feito a partir dessa operação
     * que soma o valorDeposito ao valor de saldo do usuário selecionado
     * 
     * @param valorDeposito Valor escolhido para ser depositado.
     */
    void realizaDeposito(float valorDeposito);
    /**
     * @brief Busca o saldo do usuário após um saque/depósito.
     * 
     * @return Retorna o saldo atual.
     */
    float get_saldo();
     /**
     * @brief Imprime o saldo atual da conta.
     * 
     */
    void imprimeSaldo();
      /**
     * @brief Transfere um valor para outra conta
     * @details Transfere um valor de float saldo da conta selecionada para o saldo
     * atual da conta escolhida.
     * 
     * @param userDestino Usuário que recebrá o valor
     * @param valor Qual vai ser enviado
     * @param contas Tipo de conta que receberá o valor
     */
    void transfere(std::string userDestino, float valor, std::map<std::string, Conta *> contas);
    /**
     * @brief Destrutor do objeto conta
     * @details Feito para ser possível deslogar as contas ao encerrar a sessão
     * 
     */
    ~Conta();
    /**
     * @brief Busca o titular da conta logada
     * 
     * @return O titular logado 
     */
    Titular *get_titular();
     /**
     * @brief Enviar um valor específico
     * @details Criado para linkar o valor enviado com o recebido (recebeValor)
     * @param valor valor a ser enviado
     */
    void enviaValor(float valor);
     /**
     * @brief Recebe um valor específico.
     * @details Criado para linkar o valor recebido com o enviado (enviaValor)
     * @param valor valor a ser recebido
     */
    void recebeValor(float valor);
};

#endif