#pragma once
#include <string>
#include "Pessoa.hpp"

class Titular : public Pessoa
{

public:
   Titular(Cpf cpf, std::string nome);

   // Posso ter endereço do titular , imposto de renda etc.
};