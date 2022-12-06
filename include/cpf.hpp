/**
 * @file cpf.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que verifica a validade do CPF
 * @version 0.1
 * @date 2022-11-25
 * @details Para dar maior profundidade e realidade ao projeto,
 * foi criada uma classe para verificar a validade dos CPF's.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CPF_HPP__
#define __CPF_HPP__

#include <string>
#include <iostream>
/**
 * @brief Classe responsável por verificar a validade do cpf.
 * 
 */
class Cpf
{
private:
/**
 * @brief Define o número do cpf
 * 
 */
    std::string numero;
      /**
    * @brief Verifica a validade do cpf descrito em std::string numero.
    * 
    * @return true Se for valido
    * @return false Se não for
    */
    bool cpfValido();

public:
/**
 * @brief Construtor do objeto cpf
 * @details Cria um cpf para um titular e faz a verificação ao mesmo tempo.
 * @param n Nome do usuário titular
 */
    Cpf(std::string n);
     /**
     * @brief Pede o numero do cpf de um determinado usuário.
     * 
     * @return std::string 
     */
    std::string get_numero();
};

#endif