#pragma once
#include <string>
#include "Funcionario.hpp"

class Gerente : public Funcionario{
    public:
        Gerente(string n, int i, string c, float s) : Funcionario(n,i,c,s){}
        float bonificacao() override{
            return get_salario()*0.5;
        }
};
