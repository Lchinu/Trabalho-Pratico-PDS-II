#pragma once
#include "Conta.hpp"

class ContaCorrente final:public Conta{

private:


public:

ContaCorrente(std::string numero,Titular titular);
float taxaDeSaque()const override;
void transferePara(Conta& destino,float valor);






};