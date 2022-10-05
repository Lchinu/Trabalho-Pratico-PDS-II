#include "Titular.hpp"
#include "Cpf.hpp"
#include<string>
#include<iostream>

Titular::Titular(std::string Nome,Cpf cpfparametro):
    nome(Nome),
    cpfparametro(cpfparametro)
     
    
   {
      verificaTamanhoDoNome();
   }
    
void Titular::verificaTamanhoDoNome(){
    if(nome.size()<5){
    std::cout<<"Nome muito pequeno"<<std::endl;
    exit(1);
    
    }
}

std::string Titular::recuperaNome(){
    return nome;
}
