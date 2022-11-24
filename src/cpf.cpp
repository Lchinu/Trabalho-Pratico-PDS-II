#include "cpf.hpp"

bool Cpf::cpfValido()
{
    return numero.size() == 11;
}

Cpf::Cpf(std::string n) : numero(n)
{
    if (!cpfValido())
    {
        std::cout << "Cpf invalido!" << std::endl;
    }
}

std::string Cpf::get_numero()
{
    return numero;
}
