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
        std::cout << "Cpf invalido!" << std::endl;
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
