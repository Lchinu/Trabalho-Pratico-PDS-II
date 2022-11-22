#include "Pessoa.hpp"
#include<iostream>

/**
 * @brief Construtor da classe Pessoa
 * 
 * @param cpf 
 * @param nome 
 */
Pessoa::Pessoa(Cpf cpf,std::string nome):cpf(cpf),nome(nome){
    verificaTamanhoDoNome();
}

/**
 * @brief Função para recuperar o nome
 * 
 */
void Pessoa::verificaTamanhoDoNome(){
    if(nome.size()<5){
        std::cout<<"Nome muito pequeno"<<std::endl;
        exit(1);
    }
}

