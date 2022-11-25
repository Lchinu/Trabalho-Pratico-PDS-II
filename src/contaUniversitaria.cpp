#include "contaUniversitaria.hpp"

/**
 * @brief Construtor da classe ContaUniversitaria
 * 
 * @param t 
 */
ContaUniversitaria::ContaUniversitaria(Titular t) : Conta(t) {}

/**
 * @brief Configura a taxa de saque da conta
 * 
 * @return float 
 */
float ContaUniversitaria::taxaSaque()
{
	return 0;
}
