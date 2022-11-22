#include "Pessoa.hpp"
#include<iostream>

Pessoa::Pessoa(Cpf cpf,std::string nome):cpf(cpf),nome(nome){

verificaTamanhoDoNome();

}
void Pessoa::verificaTamanhoDoNome(){
    if(nome.size()<5){
    std::cout<<"Nome muito pequeno"<<std::endl;
    exit(1);
    
    }
}

