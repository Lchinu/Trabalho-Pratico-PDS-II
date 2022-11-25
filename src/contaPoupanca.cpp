#include "contaPoupanca.hpp"

/**
 * @brief Construtor da classe ContaPoupanca
 * 
 * @param t 
 */
ContaPoupanca::ContaPoupanca(Titular t) : Conta(t) {}

/**
 * @brief Configura a taxa de saque da conta
 * 
 * @return float 
 */
float ContaPoupanca::taxaSaque()
{
	return 0.01;
}
