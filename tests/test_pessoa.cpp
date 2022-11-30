#include "doctest"
#include "pessoa.hpp"

// testa o construtor da classe Pessoa
TEST_CASE("Testa o construtor da classe Pessoa")
{
	Pessoa p("Joao", 20, "12345678900");
	CHECK(p.get_nome() == "Joao");
	CHECK(p.get_idade() == 20);
	CHECK(p.get_cpf() == "12345678900");
}

// testa o método get_nome()
TEST_CASE("Testa o método get_nome()")
{
	Pessoa p("Joao", 20, "12345678900");
	CHECK(p.get_nome() == "Joao");
}

// testa o método get_idade()
TEST_CASE("Testa o método get_idade()")
{
	Pessoa p("Joao", 20, "12345678900");
	CHECK(p.get_idade() == 20);
}

// testa o método get_cpf()
TEST_CASE("Testa o método get_cpf()")
{
	Pessoa p("Joao", 20, "12345678900");
	CHECK(p.get_cpf() == "12345678900");
}