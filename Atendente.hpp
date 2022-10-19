#include "Funcionario.hpp"
#pragma once 

class Atendente final:public Funcionario{

private:



public:

Atendente(Cpf cpf,std::string nome,float salario);
float bonificacao()const;

};