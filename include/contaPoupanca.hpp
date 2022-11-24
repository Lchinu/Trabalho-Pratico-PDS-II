#ifndef __CONTAPOUPANCA_HPP__
#define __CONTAPOUPANCA_HPP__

#include "conta.hpp"

class ContaPoupanca : public Conta
{
public:
    ContaPoupanca(Titular t);
    float taxaSaque() override;
};

#endif