#include "Titular.hpp"

#include<string>
#include<iostream>

Titular::Titular(std::string Nome,std::string Cpf){
    nome=Nome;
    cpf=Cpf;
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
std::string Titular::recuperaCpf(){
    return cpf;
}