#ifndef __CONTAUNIVERSITARIA_HPP__
#define __CONTAUNIVERSITARIA_HPP__

#include "conta.hpp"

class ContaUniversitaria : public Conta
{
public:
    ContaUniversitaria(Titular t);
    float taxaSaque() override;
};

#endif