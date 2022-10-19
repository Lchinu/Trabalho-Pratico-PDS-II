#include "Titular.hpp"
#include<string>
#include<iostream>


Titular::Titular(Cpf cpf,std::string nome,std::string senha):Pessoa(cpf,nome),Autenticavel(senha)
{ 
}