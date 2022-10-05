#include "Cpf.hpp"
#include <string>
#include <iostream>

 Cpf::Cpf(std::string cpfuser){
     //Adicionar alguma validação de CPF , mesmo que seja simples 


     cpf=cpfuser;
     validacaoDeCpf();
     std::cout<<"Cpf criado"<<std::endl;
     
 }

 std::string Cpf::recuperaCpf(){
     return cpf;
 }

 void Cpf::validacaoDeCpf(){
     if(cpf.size()<11){
         std::cout<<"Insira um CPF válido por favor"<<std::endl;
         exit(1);
     }

 }

 //Cpf::Cpf(Cpf& cpf){
     //std::cout<<"Cpf copiado"<<std::endl;
    // cpfuser=cpf.recuperaCpf();
 //}