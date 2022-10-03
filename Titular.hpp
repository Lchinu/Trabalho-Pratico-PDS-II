#pragma once
#include<string>


class Titular{
    private:
    
    std::string nome;
    std::string cpf;




    public:
    Titular(std::string nome,std::string cpf);
    
    private:
    void verificaTamanhoDoNome();
    public:

    std::string recuperaNome();
    std::string recuperaCpf();
};