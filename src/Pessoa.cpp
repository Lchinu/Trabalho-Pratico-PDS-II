#include "Pessoa.hpp"
#include <iostream>

/**
 * @brief Construtor da classe Pessoa
 *
 * @param cpf
 * @param nome
 */
Pessoa::Pessoa(Cpf cpf, std::string nome) : cpf(cpf), nome(nome)
{
    verificaTamanhoDoNome();
}

/**
 * @brief Função para recuperar o nome
 *
 */
void Pessoa::verificaTamanhoDoNome()
{
    if (nome.size() < 5)
        throw std::runtime_error("Nome muito curto");
}
