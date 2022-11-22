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
    {
        std::cout << "Impossível sacar valores negativos" << std::endl;
    }

    float tarifaDeSaque = valorASacar * 0.001;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (saldo < valorDoSaque)
    {
        std::cout << "Saldo insuficiente" << std::endl;
        exit(1);
    }

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
    {
        std::cout << "Impossível depositar valores negativos" << std::endl;
        exit(1);
    }
    else
    {
        saldo = saldo + valorADepositar;
    }
}

/**
 * @brief Função para verificar o saldo da conta
 *
 * @return float
 */
float Conta::olharSaldo() const
{ // Esse método não modifica nada por isso usei o const
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
