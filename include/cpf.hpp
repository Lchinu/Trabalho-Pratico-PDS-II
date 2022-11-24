#ifndef __CPF_HPP__
#define __CPF_HPP__

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

#endif