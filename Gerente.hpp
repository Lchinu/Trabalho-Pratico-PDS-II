#pragma once
#include "Funcionario.hpp"

class Gerente:public Funcionario{

public:
Gerente(Cpf cpf,std::string nome,float salario);
float bonificacao()const;



};