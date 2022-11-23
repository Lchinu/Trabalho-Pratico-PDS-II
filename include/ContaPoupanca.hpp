
#pragma once
#include "Conta.hpp"

class ContaPoupanca : public Conta{
    public:
        ContaPoupanca(Titular t) : Conta(t){}
		float taxaSaque() override;
};
