/**
 * @file ExcecaoCpf.hpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe responsável por tratar o erro de cpf invalido
 * @version 0.1
 * @date 2022-12-06
 * @details Na criação dos usuários é preciso colocar um CPF de 11 dígitos,
 * caso contrário será lançada a exceção.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string>
#pragma once

/**
 * @brief Classe que lança o erro em caso de cpf inválido.
 * @details A mensagem de erro é: Cpf inválido.
 * 
 */
class ExcecaoCpf:public std::exception{
    private:
    /**
     * @brief String com a mensagem de erro da exceção
     * 
     */
    std:: string _erro;
    public:
    /**
     * @brief Construtor do objeto ExecaoCpf
     * @details Constrói a mensagem de erro quando o cpf de um usuário não é válido
     * 
     */
    ExcecaoCpf();
    /**
    * @brief Sobrescrita do método what da classe Exception.
    * 
    * @return const char* 
    */
    virtual const char* what() const noexcept override;
};