
#pragma once
#include "conta.hpp"

class ContaPoupanca : public Conta{
    public:
        ContaPoupanca(Titular t);
		float taxaSaque() override;
};
