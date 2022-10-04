#pragma once
#include<string>
#include "Cpf.hpp"


class Titular{
    private:
    
    std::string nome;
    public:
    Cpf cpfparametro;

    public:
    Titular(std::string nome,Cpf cpfparametro);
    
    private:
    void verificaTamanhoDoNome();
    public:

    std::string recuperaNome();
    //std::string recuperaCpf();
};