#include "Cpf.hpp"
#include "validacpfcnpj.hpp"
#include <string>
#include <iostream>

/**
 * @brief Construtor da classe Cpf
 *
 * @param cpfuser
 */
Cpf::Cpf(std::string cpfuser)
{
    cpf = cpfuser;
    if (validacaoDeCpf())
    {
        throw std::runtime_error("CPF inválido");
    }
    std::cout << "Cpf criado" << std::endl;
}

/**
 * @brief Função para recuperar o CPF
 *
 * @return std::string
 */
std::string Cpf::recuperaCpf()
{
    return cpf;
}

/**
 * @brief Função para validar o CPF
 *
 * @return true
 * @return false
 */
bool Cpf::validacaoDeCpf()
{
    std::string pre_cpf = cpf;
    if (cpf.size() == 14)
    {
        pre_cpf.erase(3, 1);
        pre_cpf.erase(6, 1);
        pre_cpf.erase(9, 1);
        return ValidaCPFCNPJ::validaCPF(pre_cpf);
    }
    if (cpf.size() == 11)
    {
        return ValidaCPFCNPJ::validaCPF(cpf);
    }
    else
    {
        return false;
    }
}