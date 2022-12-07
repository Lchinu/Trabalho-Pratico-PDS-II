/**
 * @file ExcecaoTransferencia.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que manda a exceção na função de transferência
 * @version 0.1
 * @date 2022-12-06
 * @details Transferências que são feitas sem saldo disponível são tratadas como
 * exceção.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string>
#pragma once

/**
 * @brief Classe que lança a exceção da transferência
 * @details A mensagem de erro é: Saldo indisponível para transferência.
 * 
 */
class ExcecaoTransferencia:public std::exception{
    private:
    /**
     * @brief Fica aqui a mensagem de erro quando existe a exceção.
     * 
     */
    std:: string _erro;
    public:
    /**
     * @brief Construtor do objeto ExcecaoTransferencia
     * @details Constrói a mensagem de erro que será mostrada quando a exceção for ativada.
     * 
     */
    ExcecaoTransferencia();
    /**
     * @brief Sobrescrita do método what da classe Exception.
     * 
     * @return const char* 
     */
    virtual const char* what() const noexcept override;
};