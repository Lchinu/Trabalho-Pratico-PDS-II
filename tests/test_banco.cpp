#include "doctest"
#include "banco.hpp"
#include "conta.hpp"

TEST_CASE("Teste 1 - Construtor")
{
	Banco banco;
	CHECK(banco.Users.size() == 0);
	CHECK(banco.Contas.size() == 0);
}

// testa o adicionaConta
TEST_CASE("Teste 2 - Adiciona Conta")
{
	Banco banco;
	Titular t("Joao", 20, "12345678900", "joao", "123");
	Conta c(t);
	banco.adicionaConta(c);
	CHECK(banco.Contas.size() == 1);
}