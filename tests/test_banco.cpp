#include "doctest"
#include "banco.hpp"
#include "conta.hpp"

TEST_CASE("Teste 1 - Construtor")
{
	Banco banco;
	CHECK(banco.Users.size() == 0);
	CHECK(banco.Contas.size() == 0);
}
