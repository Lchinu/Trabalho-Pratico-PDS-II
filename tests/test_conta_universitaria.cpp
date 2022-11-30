#include "doctest"
#include "contaUniversitaria.hpp"
#include "titular.hpp"

// testa o construtor
TEST_CASE("Testa o construtor") {
	Titular t("Joao", 20, "12345678900", "joao", "123");
	ContaUniversitaria c(t);
	CHECK(c.get_saldo() == 0);
}

// testa realizaSaque
TEST_CASE("Testa realizaSaque") {
	Titular t("Joao", 20, "12345678900", "joao", "123");
	ContaUniversitaria c(t);
	c.realizaDeposito(200);
	c.realizaSaque(100);
	CHECK(c.get_saldo() == 100);
}