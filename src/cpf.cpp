/**
 * @file cpf.cpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que verifica a validade do CPF
 * @version 0.1
 * @date 2022-11-25
 * @details Para dar maior profundidade e realidade ao projeto,
 * foi criada uma classe para verificar a validade dos CPF's.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "cpf.hpp"

/**
 * @brief Verifica a validade do CPF
 *
 * 
 * @return true se o CPF for valido
 * @return false se o CPF for invalido
 */
bool Cpf::cpfValido()
{
    return numero.size() == 11;
}

/**
 * @brief Construtor da classe CPF
 * @details Utiliza a função que verifica o CPF e diz se ele é valido
 * ou nao para prosseguir com o banco.
 * @param n número do cpf do usuário
 */
Cpf::Cpf(std::string n) : numero(n)
{
    if (!cpfValido())
    {
        throw std::runtime_error("Cpf invalido!");
    }
}

/**
 * @brief Pega o numero do cpf
 * 
 * @return std::string retorna o CPF
 */
std::string Cpf::get_numero()
{
    return numero;
}
