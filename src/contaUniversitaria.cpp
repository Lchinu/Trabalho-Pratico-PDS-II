#include "contaUniversitaria.hpp"


ContaUniversitaria::ContaUniversitaria(Titular t) : Conta(t) {}


float ContaUniversitaria::taxaSaque()
{
	return 0;
}
