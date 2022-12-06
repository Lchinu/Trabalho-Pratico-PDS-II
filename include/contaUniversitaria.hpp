/**
 * @file contaUniversitaria.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria conta do tipo universitária
 * @version 0.1
 * @date 2022-11-25
 * @details Com o intuito de diferenciar os tipos de conta, essa foi
 * criada para ter uma menor taxa de saque.
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CONTAUNIVERSITARIA_HPP__
#define __CONTAUNIVERSITARIA_HPP__

#include "conta.hpp"
/**
 * @brief Classe respnsável por linkar uma conta ao tipo universitária.
 * 
 */
class ContaUniversitaria : public Conta
{
public:
/**
 * @brief Construtor do objeto ContaUnivesitaria
 * 
 * @param t Usuário titular que terá a ContaUniversitaria
 */
    ContaUniversitaria(Titular t);
     /**
     * @brief Cria uma taxa de saque para o objeto ContaUniversitaria
     * 
     * @return float o valor da taxa
     */
    float taxaSaque() override;
};

#endif