/**
 * @file pessoa.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria a pessoa dona da conta
 * @version 0.1
 * @date 2022-11-25
 * @details Como toda conta precisa ter um dono, essa classe é responsável 
 * por receber os dados das pessoas, sendo eles: nome, idade e o cpf.
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __PESSOA_HPP__
#define __PESSOA_HPP__

#include <iostream>
#include <string>
#include "cpf.hpp"
/**
 * @brief Classe criadora das pessoas
 * @details Aqui é criado as pessoas com seus respectivos dados, 
 * os quais serão utiliziados com um dos dois tipos diferentes de
 * conta.
 * 
 */
class Pessoa
{
protected:
/**
 * @brief Criação da string nome para pessoa
 * 
 */
    std::string nome;
      /**
     * @brief Idade da pessoa é criada aqui
     * 
     */
    int idade;
     /**
     * @brief Cpf criado anteriormente em cpf.hpp é reutilizado aqui
     * 
     */
    Cpf cpf;

public:
/**
 * @brief Construtor da classe Pessoa
 * @details Aqui é pedido os dados essenciais das pessoas que utilizam as contas,
 * seja ela universitaria ou poupança.
 * @param n Nome da pessoa
 * @param i Idade da pessoa
 * @param c CPF da pessoa
 */
    Pessoa(std::string n, int i, std::string c);
     /**
     * @brief É definido para o objeto pessoa um nome
     * 
     * @return retorna o nome do usuário
     */
    std::string get_nome();
      /**
     * @brief É definido para o objeto pessoa uma idade
     * 
     * @return retorna a idade do usuário
     */
    int get_idade();
    /**
     * @brief É definido para o objeto pessoa um cpf
     * 
     * @return retorna o cpf do usuário
     */
    std::string get_cpf();
};

#endif