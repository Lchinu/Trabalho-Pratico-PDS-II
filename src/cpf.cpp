#include "cpf.hpp"

/**
 * @brief Construtor da classe CPF
 * 
 * @return true 
 * @return false 
 */
bool Cpf::cpfValido()
{
    return numero.size() == 11;
}

/**
 * @brief Construtor da classe CPF
 * 
 * @param n 
 */
Cpf::Cpf(std::string n) : numero(n)
{
    if (!cpfValido())
    {
        throw std::runtime_error("Cpf invalido!");
    }
}

/**
 * @brief Retorna o número do CPF
 * 
 * @return std::string 
 */
std::string Cpf::get_numero()
{
    return numero;
}
