#pragma once
#include <string>
#include <iostream>

class Cpf{
    private:
        std::string numero;
        bool cpfValido();
    public:
        Cpf(std::string n);
        std::string get_numero();

};