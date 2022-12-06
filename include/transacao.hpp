#pragma once
#include <iostream>
#include <vector>
#include <string>


class Transacao{
	private:
		float valor;
		std::string tipo;
		std::string autor;
	public:
		Transacao(float v, std::string t, std::string a);
		
		float get_valor();
		std::string get_tipo();
		std::string get_autor();		
};