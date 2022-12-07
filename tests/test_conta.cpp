#include "doctest"
#include "conta.hpp"
#include "titular.hpp"

// testa o construtor da classe Conta
TEST_CASE("Testa o construtor da classe Conta")
{
	Titular t("Joao", 20, "12345678900", "joao", "123");
	Conta c(t);
	CHECK(c.get_saldo() == 0);
}

// testa realizaSaque
TEST_CASE("Testa realizaSaque")
{
	Titular t("Joao", 20, "12345678900", "joao", "123");
	Conta c(t);
	c.realizaDeposito(200);
	c.realizaSaque(100);
	CHECK(c.get_saldo() == 95);
}

// testa throw de realizaSaque
TEST_CASE("Testa throw de realizaSaque")
{
	Titular t("Joao", 20, "12345678900", "joao", "123");
	Conta c(t);
	CHECK_THROWS(c.realizaSaque(100));
}

// testa realiza deposito
TEST_CASE("Testa realiza deposito")
{
	Titular t("Joao", 20, "12345678900", "joao", "123");
	Conta c(t);
	c.realizaDeposito(100);
	CHECK(c.get_saldo() == 100);
}

// testa o transfere
TEST_CASE("Testa o transfere")
{
	Titular t("Joao", 20, "12345678900", "joao", "123");
	Titular t1("Joao", 20, "12345678900", "joao2", "123");
	Conta c(t);
	Conta c2(t1);
	c.realizaDeposito(100);

	std::map<std::string, Conta *> contas;
	contas["joao"] = &c;
	contas["joao2"] = &c2;
	c.transfere("joao2", 100, contas);
	CHECK(c.get_saldo() == 0);
	CHECK(c2.get_saldo() == 100);
}