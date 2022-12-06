#include "cpf.hpp"
#include "ExcecaoCpf.hpp"


bool Cpf::cpfValido()
{
    return numero.size() == 11;
}

Cpf::Cpf(std::string n) : numero(n)
{
    if (!cpfValido())
    {
        throw ExcecaoCpf();
    }
}


std::string Cpf::get_numero()
{
    return numero;
}
