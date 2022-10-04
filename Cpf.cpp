#include "Cpf.hpp"
#include <string>
#include <iostream>

 Cpf::Cpf(std::string cpfuser){
     cpf=cpfuser;
     std::cout<<"Cpf criado"<<std::endl;
 }

 std::string Cpf::recuperaCpf(){
     return cpf;
 }

 //Cpf::Cpf(Cpf& cpf){
     //std::cout<<"Cpf copiado"<<std::endl;
    // cpfuser=cpf.recuperaCpf();
 //}