#include "titular.hpp"


Titular::Titular(std::string n, int i, std::string c, std::string u, std::string s) : Pessoa(n, i, c)
{
        usuario = u;
        senha = s;

        std::cout << get_nome() << " foi registrado no banco.\n" << std::endl;
}


Titular::Titular(std::string n, int i, std::string c) : Pessoa(n, i, c) {}


std::string Titular::get_senha()
{
        return senha;
}


std::string Titular::get_usuario()
{
        return usuario;
}
