#pragma once
#include <iostream>
#include <string>
#include "pessoa.hpp"

class Titular : public Pessoa{
    private:
        std::string senha;
        std::string usuario;
    public:
        Titular(std::string n, int i, std::string c,std::string u, std::string s);
        Titular(std::string n, int i, std::string c);
        std::string get_senha();
        std::string get_usuario();
};
