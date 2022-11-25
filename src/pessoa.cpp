/**
 * @file pessoa.cpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria a pessoa dona da conta
 * @version 0.1
 * @date 2022-11-25
 * @details Como toda conta precisa ter um dono, essa classe é responsável 
 * por receber os dados das pessoas.
 * @copyright Copyright (c) 2022
 * 
 */
#include "pessoa.hpp"

/**
 * @brief Construtor da classe Pessoa
 * @details Aqui é pedido os dados essenciais das pessoas que utilizam as contas,
 * seja ela universitaria ou poupança.
 * @param n Nome da pessoa
 * @param i Idade da pessoa
 * @param c CPF da pessoa
 */
Pessoa::Pessoa(std::string n, int i, std::string c) : nome(n), idade(i), cpf(c)
{
}

/**
 * @brief Retorna o nome da pessoa
 * 
 * @return std::string 
 */
std::string Pessoa::get_nome()
{
    return nome;
}

/**
 * @brief Retorna a idade da pessoa
 * 
 * @return int 
 */
int Pessoa::get_idade()
{
    return idade;
}

/**
 * @brief Retorna o CPF da pessoa
 * 
 * @return std::string 
 */
std::string Pessoa::get_cpf()
{
    return cpf.get_numero();
}
