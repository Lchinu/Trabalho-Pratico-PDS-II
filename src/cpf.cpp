#include "cpf.hpp"


bool Cpf::cpfValido()
{
    return numero.size() == 11;
}

Cpf::Cpf(std::string n) : numero(n)
{
    if (!cpfValido())
    {
        throw std::runtime_error("Cpf invalido!");
    }
}


std::string Cpf::get_numero()
{
    return numero;
}
