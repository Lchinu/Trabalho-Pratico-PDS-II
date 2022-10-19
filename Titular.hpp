#pragma once
#include<string>
#include "Pessoa.hpp"
#include "Autenticavel.hpp"


class Titular:public Pessoa,public Autenticavel{
   
    
   public:
   Titular(Cpf cpf,std::string nome,std::string senha);
    
   //Posso ter endereço do titular , imposto de renda etc.
   

};