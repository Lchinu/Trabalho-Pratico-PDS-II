#pragma once
#include <iostream>
#include <string>
#include "cpf.hpp"

class Pessoa{
    protected:
        std::string nome;
        int idade;
        Cpf cpf;
    public:
        Pessoa(std::string n, int i, std::string c);
        std::string get_nome();
        int get_idade();
        std::string get_cpf();
};