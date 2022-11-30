#include "titular.hpp"

/**
 * @brief Construtor da classe Titular
 * 
 * @param n 
 * @param i 
 * @param c 
 * @param u 
 * @param s 
 */
Titular::Titular(std::string n, int i, std::string c, std::string u, std::string s) : Pessoa(n, i, c)
{
        usuario = u;
        senha = s;

        std::cout << get_nome() << " foi registrado no banco." << std::endl;
}

/**
 * @brief Construtor da classe Titular
 * 
 * @param n 
 * @param i 
 * @param c 
 */
Titular::Titular(std::string n, int i, std::string c) : Pessoa(n, i, c) {}

/**
 * @brief Retorna a senha do titular
 * 
 * @return std::string 
 */
std::string Titular::get_senha()
{
        return senha;
}

/**
 * @brief Retorna o usuário do titular
 * 
 * @return std::string 
 */
std::string Titular::get_usuario()
{
        return usuario;
}
