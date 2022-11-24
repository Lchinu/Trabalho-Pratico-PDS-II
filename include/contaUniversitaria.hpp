#pragma once
#include "conta.hpp"

class ContaUniversitaria : public Conta{
    public:
        ContaUniversitaria(Titular t);
		float taxaSaque() override;
};
