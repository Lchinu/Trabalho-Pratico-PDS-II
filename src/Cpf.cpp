#include "Cpf.hpp"
#include <string>
#include <iostream>

 Cpf::Cpf(std::string cpfuser){
     //Adicionar alguma validação de CPF , mesmo que seja simples 


     cpf=cpfuser;
     validacaoDeCpf();
     if(validacaoDeCpf()==0){
         std::cout<<"Insira um CPF válido por favor "<<std::endl;
         exit(1);
     }
     std::cout<<"Cpf criado"<<std::endl;
     
 }

 std::string Cpf::recuperaCpf(){
     return cpf;
 }

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

 //Cpf::Cpf(Cpf& cpf){
     //std::cout<<"Cpf copiado"<<std::endl;
    // cpfuser=cpf.recuperaCpf();
 //}