#pragma once
#include"Cpf.hpp"
#include<string>
#include"Pessoa.hpp"


class Funcionario:public Pessoa{

private:

float salario;

public:
Funcionario(Cpf cpf,std::string nome,float salario);
std::string recuperaNome();





};