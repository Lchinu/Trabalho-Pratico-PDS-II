/**
 * @file titular.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria as contas titulares
 * @version 0.1
 * @date 2022-11-25
 * @details Responsável por unir as informações dos usuários com o tipo de conta,
 * além de pedir um nickname e uma senha para a conta.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __TITULAR_HPP__
#define __TITULAR_HPP__

#include <iostream>
#include <string>
#include "pessoa.hpp"
/**
 * @brief Classe responsável pela criação do login
 * @details Como toda conta bancária possui um titular, com login e senha,
 * essa classe é responsável pela criação destes atributos para cada Pessoa.
 * 
 */
class Titular : public Pessoa
{
private:
/**
 * @brief Criação da senha e usuário dos titulares.
 * 
 */
    std::string usuario, senha;

public:
/**
 * @brief Construtor do objeto titular
 * @details Constrói um usuário titular com os dados dos usuários e atribui 
 * a eles um login e uma senha
 * 
 * @param n Nome do titular
 * @param i Idade do titular
 * @param c Cpf do titular
 * @param u Usuário do titular
 * @param s Senha do titular
 */
    Titular(std::string n, int i, std::string c, std::string u, std::string s);
     /**
     * @brief Construtor do objeto titular
     * 
     * @param n Nome do titular
     * @param i Idade do titular
     * @param c Cpf do titular
     */
    Titular(std::string n, int i, std::string c);
     /**
     * @brief Definido a senha do usuário
     * 
     * @return retorna a senha
     */
    std::string get_senha();
     /**
     * @brief Definido o usuário titular da conta.
     * 
     * @return std::string 
     */
    std::string get_usuario();
};

#endif