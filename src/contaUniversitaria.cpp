/**
 * @file contaUniversitaria.cpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria conta do tipo universitária
 * @version 0.1
 * @date 2022-11-25
 * @details Com o intuito de diferenciar os tipos de conta, essa foi
 * criada para ter uma menor taxa de saque.
 * @copyright Copyright (c) 2022
 * 
 */
#include "contaUniversitaria.hpp"

/**
 * @brief Construtor da classe ContaUniversitaria
 * 
 * @param t Retorna o titular da conta tipo universitária.
 */
ContaUniversitaria::ContaUniversitaria(Titular t) : Conta(t) {}

/**
 * @brief Configura a taxa de saque da conta
 * @details cada conta tem um valor diferente para a realização dos saques,
 * fazendo necessário a criação de classes independentes.
 * @return float 
 */
float ContaUniversitaria::taxaSaque()
{
	return 0;
}
