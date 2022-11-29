/**
 * @file contaPoupanca.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria conta do tipo poupança
 * @version 0.1
 * @date 2022-11-25
 * @details Com o intuito de diferenciar os tipos de conta, essa foi
 * criada para ter uma maior taxa de saque.
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CONTAPOUPANCA_HPP__
#define __CONTAPOUPANCA_HPP__

#include "conta.hpp"
/**
 * @brief Classe respnsável por linkar uma conta ao tipo poupança
 * 
 */
class ContaPoupanca : public Conta
{
public:
/**
 * @brief Construtor do objeto ContaPoupanca
 * 
 * @param t Usuário titular que terá a ContaPoupanca
 */
    ContaPoupanca(Titular t);
    /**
     * @brief Cria uma taxa de saque para o objeto ContaPoupanca
     * 
     * @return float o valor da taxa
     */
    float taxaSaque() override;
};

#endif