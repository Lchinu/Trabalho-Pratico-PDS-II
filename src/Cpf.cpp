#include "Cpf.hpp"
#include <string>
#include <iostream>

/**
 * @brief Construtor da classe Cpf
 * 
 * @param cpfuser 
 */
Cpf::Cpf(std::string cpfuser){
    cpf=cpfuser;
    validacaoDeCpf();
    if(validacaoDeCpf()==0){
        std::cout<<"Insira um CPF válido por favor "<<std::endl;
        exit(1);
    }
    std::cout<<"Cpf criado"<<std::endl;
    
}

/**
 * @brief Função para recuperar o CPF
 * 
 * @return std::string 
 */
std::string Cpf::recuperaCpf(){
    return cpf;
}

/**
 * @brief Função para validar o CPF
 * 
 * @return true 
 * @return false 
 */
bool Cpf::validacaoDeCpf(){
    if(cpf.size()==14){ //Respeita o formato xxx.xxx.xxx-xx (14 caracteres)
        
        return true;
    }
    if(cpf.size()==11){//Respeita o formato xxxxxxxxxxx (11 caracteres)
    
        return true;
    }
    else{
        return false; //Se o cpf não obedecer esses formatos , ele é inválido . 
    }

}