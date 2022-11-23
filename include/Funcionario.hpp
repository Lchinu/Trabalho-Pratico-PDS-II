#pragma once
#include "Cpf.hpp"
#include <string>
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{

private:
	float salario;

 public:
        Funcionario(string n, int i, string c, float s) : Pessoa(n,i,c),
        salario(s)
        {cout << "Funcionario criado com sucesso." << endl;}
        float get_salario(){
            return salario;
        }
        virtual float bonificacao(){
            return 0;
        }
};
