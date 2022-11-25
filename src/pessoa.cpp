#include "pessoa.hpp"

/**
 * @brief Construtor da classe Pessoa
 * 
 * @param n 
 * @param i 
 * @param c 
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
