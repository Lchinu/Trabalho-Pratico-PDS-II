#include "Titular.hpp"
#include<string>
#include<iostream>

Titular::Titular(std::string nome,std::string cpf){
    nome=nome;
    cpf=cpf;
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