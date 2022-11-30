#include "doctest"
#include "titular.hpp"

// testa o construtor (std::string n, int i, std::string c, std::string u, std::string s)
TEST_CASE("Testa o construtor (std::string n, int i, std::string c, std::string u, std::string s)")
{
		Titular t("Joao", 20, "12345678900", "joao", "123");
		CHECK(t.get_nome() == "Joao");
		CHECK(t.get_idade() == 20);
		CHECK(t.get_cpf() == "12345678900");
		CHECK(t.get_usuario() == "joao");
		CHECK(t.get_senha() == "123");
}

// testa o construtor (std::string n, int i, std::string c)
TEST_CASE("Testa o construtor (std::string n, int i, std::string c)")
{
		Titular t("Joao", 20, "12345678900");
		CHECK(t.get_nome() == "Joao");
		CHECK(t.get_idade() == 20);
		CHECK(t.get_cpf() == "12345678900");
}

// testa o método get_usuario()
TEST_CASE("Testa o método get_usuario()")
{
		Titular t("Joao", 20, "12345678900", "joao", "123");
		CHECK(t.get_usuario() == "joao");
}

// testa o método get_senha()
TEST_CASE("Testa o método get_senha()")
{
		Titular t("Joao", 20, "12345678900", "joao", "123");
		CHECK(t.get_senha() == "123");
}