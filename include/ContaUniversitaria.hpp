#pragma once
#include "Conta.hpp"

class ContaUniversitaria : public Conta{
	public:
		ContaUniversitaria(Titular t) : Conta(t){}
		float taxaSaque() override;
};
