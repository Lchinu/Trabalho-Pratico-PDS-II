#pragma once
#include<string>

class Cpf{
    private:
    std::string cpf;

    public:
    Cpf(std::string cpfuser);
    std::string recuperaCpf();
    bool validacaoDeCpf();
   


};