#pragma once
#include "Conta.hpp"


class ContaPoupanca final:public Conta{

private:



public:

ContaPoupanca(std::string numero,Titular titular);
float taxaDeSaque()const override;







    
};