/**
 * @file contaPoupanca.cpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria conta do tipo poupança
 * @version 0.1
 * @date 2022-11-25
 * @details Com o intuito de diferenciar os tipos de conta, essa foi
 * criada para ter uma maior taxa de saque.
 * @copyright Copyright (c) 2022
 * 
 */
#include "contaPoupanca.hpp"

/**
 * @brief Construtor da classe ContaPoupanca
 * 
 * @param t Retorna o titular da conta tipo poupança
 */
ContaPoupanca::ContaPoupanca(Titular t) : Conta(t) {}

/**
 * @brief Configura a taxa de saque da conta
 * @details Cada conta tem um valor diferente para a realização dos saques,
 * fazendo necessário a criação de classes independentes.
 * @return float 
 */
float ContaPoupanca::taxaSaque()
{
	return 0.01;
}
