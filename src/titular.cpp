/**
 * @file titular.cpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria as contas essencialmente
 * @version 0.1
 * @date 2022-11-25
 * @details Responsável por unir as informações dos usuários com o tipo de conta,
 * além de pedir um nickname e uma senha para a conta.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "titular.hpp"

/**
 * @brief Construtor da classe Titular
 * @details Cria aqui a conta da pessoa, sendo ela a titular da conta e a
 * registra diretamente no banco com todos os dados.
 * 
 * @param n Nome do titular
 * @param i Idade do titular
 * @param c CPF do titular
 * @param u Usuario do titular
 * @param s Senha do titular
 */
Titular::Titular(std::string n, int i, std::string c, std::string u, std::string s) : Pessoa(n, i, c)
{
        usuario = u;
        senha = s;

        std::cout << get_nome() << " foi registrado no banco." << std::endl;
}

/**
 * @brief Construtor da classe Titular
 * 
 * @param n Nome da pessoa
 * @param i Idade da pessoa
 * @param c CPF da pessoa
 */
Titular::Titular(std::string n, int i, std::string c) : Pessoa(n, i, c) {}

/**
 * @brief Retorna a senha do titular
 * 
 * @return std::string 
 */
std::string Titular::get_senha()
{
        return senha;
}

/**
 * @brief Retorna o usuário do titular
 * 
 * @return std::string 
 */
std::string Titular::get_usuario()
{
        return usuario;
}
