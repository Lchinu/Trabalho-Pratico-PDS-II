#include "doctest"
#include "contaPoupanca.hpp"
#include "titular.hpp"

// testa o construtor da classe ContaPoupanca
TEST_CASE("Testa o construtor da classe ContaPoupanca")
{
	Titular t("Joao", 20, "12345678900", "joao", "123");
	ContaPoupanca c(t);
	CHECK(c.get_saldo() == 0);
}

// testa realizaSaque
TEST_CASE("Testa realizaSaque")
{
	Titular t("Joao", 20, "12345678900", "joao", "123");
	ContaPoupanca c(t);
	c.realizaDeposito(200);
	c.realizaSaque(100);
	CHECK(c.get_saldo() == 99);
}