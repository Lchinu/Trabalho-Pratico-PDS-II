#pragma once
#include <string>
#include "Funcionario.hpp"

class Caixa : public Funcionario{
    public:
        Caixa(string n, int i, string c, float s) : Funcionario(n,i,c,s){}
        float bonificacao() override{
            return get_salario()*0.1;
        }
};
