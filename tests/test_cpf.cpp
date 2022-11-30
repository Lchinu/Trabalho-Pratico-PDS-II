#include "doctest"
#include "cpf.hpp"

TEST_CASE("Teste 1 - Construtor")
{
	// testa o construtor da classe CPF
	Cpf cpf("12345678901");
	CHECK(cpf.get_numero() == "12345678901");
}

TEST_CASE("Teste 2 - Construtor")
{
	// testa o construtor da classe CPF
	Cpf cpf("12345678901");
	CHECK(cpf.get_numero() == "12345678901");

	// cria um cpf com mais de 11 digitos e ve se dar um runtime_error
	CHECK_THROWS_AS(Cpf("1234567891011"), std::runtime_error);
}

TEST_CASE("Teste 3 - Construtor")
{
	// testa o construtor da classe CPF
	Cpf cpf("12345678901");
	CHECK(cpf.get_numero() == "12345678901");

	// cria um cpf com menos de 11 digitos e ve se dar um runtime_error
	CHECK_THROWS_AS(Cpf("1234567890"), std::runtime_error);
}