#pragma once
#include <string>
#include "Cpf.hpp"

class Pessoa
{
protected:
    Cpf cpf;
    std::string nome;

public:
    Pessoa(Cpf cpf, std::string nome);

private:
    void verificaTamanhoDoNome();
};