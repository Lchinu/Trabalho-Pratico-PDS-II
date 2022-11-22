// Implementação da Classe Conta
#include "Titular.hpp"
#include "Conta.hpp"
#include <iostream>
#include <string>

int Conta::numeroDeContas = 0;

/**
 * @brief Construtor da classe Conta
 *
 * @param numeroConta
 * @param titular
 */
Conta::Conta(std::string numeroConta, Titular titular) : numeroConta(numeroConta),
                                                         titular(titular),
                                                         saldo(0)
{
    numeroDeContas++;
}

/**
 * @brief Função para sacar um valor da conta
 *
 * @param valorASacar
 */
void Conta::sacar(float valorASacar)
{
    if (valorASacar < 0)
        throw std::runtime_error("Não é possível sacar um valor negativo");

    float tarifaDeSaque = valorASacar * 0.001;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (saldo < valorDoSaque)
        throw std::runtime_error("Saldo insuficiente");

    saldo = saldo - valorDoSaque;
}

/**
 * @brief Função para depositar um valor na conta
 *
 * @param valorADepositar
 */
void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0)
        throw std::runtime_error("Não é possível depositar um valor negativo");
    else
        saldo = saldo + valorADepositar;
}

/**
 * @brief Função para verificar o saldo da conta
 *
 * @return float
 */
float Conta::olharSaldo() const
{
    return saldo;
}

/**
 * @brief Função para olhar o número da conta
 *
 * @return std::string
 */
std::string Conta::olharNumeroConta()
{
    return numeroConta;
}
