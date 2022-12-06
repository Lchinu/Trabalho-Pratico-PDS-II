/**
 * @file transacao.hpp
 * @author Lucas Fernando de Souza (lchinuzinhoplay@gmail.com)
 * @brief Classe responsável pelo extrato 
 * @version 0.1
 * @date 2022-11-28
 * @details Com o intuito de organizar todas os movimentos realizados pelos
 * usuários, essa clase foi criada para gerar um extrato com essas informações 
 * organizadas.
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once
#include <iostream>
#include <vector>
#include <string>

/**
 * @brief Classe organizadora das operações realizadas
 * @details Como todo caixa eletrônico possui extrato com as operações realizadas,
 * essa clase é responsável por reunir todas as transações realizadas pelos usuários
 * e registrá-las.
 * 
 */
class Transacao{
	private:
	/**
	 * @brief Valor das operações
	 * 
	 */
		float valor;
		/**
 * @brief Tipo da operação realizada
 * 
 */
		std::string tipo;
		/**
		 * @brief Autor da operação
		 * 
		 */
		std::string autor;
	public:
		/**
	 * @brief Construtor do objeto Transacao
	 * @details Construção das transações organizadas uma a uma para imprimeExtrato,
	 * todas as operações realizadas entre usuários é registrada aqui.
	 * @param v Valor da transação
	 * @param t Tipo da operação
	 * @param a Autor da operação
	 */
		Transacao(float v, std::string t, std::string a);
		/**
		 * @brief Definido o valor da transação
		 * 
		 * @return float valor
		 */
		float get_valor();
		/**
		 * @brief Definido o tipo do objeto 
		 * 
		 * @return std::string tipo da transação
		 */
		std::string get_tipo();
		/**
		 * @brief Definido o autor da transação
		 * 
		 * @return std::string  autor da transação
		 */
		std::string get_autor();		
};