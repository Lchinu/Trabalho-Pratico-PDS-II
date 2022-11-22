#include "Funcionario.hpp"
#include <string>
#include <iostream>

/**
 * @brief Construtor da classe Funcionario
 *
 * @param cpf
 * @param nome
 * @param salario
 */
Funcionario::Funcionario(Cpf cpf, std::string nome, float salario) : Pessoa(cpf, nome), salario(salario)
{
}

/**
 * @brief Função para recuperar o salário
 *
 * @return std::string
 */
std::string Funcionario::recuperaNome()
{
    return nome;
}