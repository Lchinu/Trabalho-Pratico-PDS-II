/**
 * @file ExcecaoNegativo.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que manda a exceção na função de saque
 * @version 0.1
 * @date 2022-12-06
 * @details Saques que são feitos com valores negativos são tratados como exceção.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string>
#pragma once

/**
 * @brief Classe responsável por captar o erro de saque com valores negativos.
 * @details A mensagem de erro é: Impossível realizar operações com valores negativos
 */
class ExcecaoNegativo:public std::exception{
    private:
     /**
     * @brief String que armazena a mensagem de erro da exceção
     * 
     */
    std:: string _erro;
    public:
     /**
     * @brief Construtor do objeto ExcecaoNegativo
     * @details Constrói a mensagem de erro que será mostrada quando a exceção for ativada.
     * 
     */
    ExcecaoNegativo();
      /**
    * @brief Sobrescrita do método what da classe Exception.
    * 
    * @return const char* 
    */
    virtual const char* what() const noexcept override;
};