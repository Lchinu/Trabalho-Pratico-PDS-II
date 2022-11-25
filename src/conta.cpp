/**
 * @file conta.cpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe responsável por realizar as operações selecionadas.
 * 
 * @version 0.1
 * @date 2022-11-25
 * @details A classe conta é a responsável por executar as operações selecionadas
 * e criadas na classe banco, aqui o usuário pode ter suas funcionalidades executadas.
 * Também é criada aqui as taxas dos diferentrs tipos de conta.
 * 
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "conta.hpp"

/**
 * @brief Configura a taxa de saque da conta.
 * @details Implementa ao caixa a possibilidade de lucrar e aumentar o seu valor
 * com as taxas cobradas de diferentes formas para determinidados tipos de conta.
 * @return float Taxa cobrada quando um valor é sacado. Desontado no saldo do usuário.
 */
float Conta::taxaSaque()
{
    return 0.05;
}

/**
 * @brief Construtor da classe Conta
 * 
 * @param t contém os dados do usuário titular
 */
Conta::Conta(Titular t) : titular(t)
{
    saldo = 0;
}

/**
 * @brief Realiza um saque na conta
 * @details Reponsável por realizar os saques desejados pelos usuários e cobrar 
 * a taxa devida a certas contas, contendo também as exceções existentes para 
 * saque.
 * 
 * @param valorSaque Valor escolhido pelo usuário para ser sacado.
 */
void Conta::realizaSaque(float valorSaque)
{
    float taxa = valorSaque * taxaSaque();
    if (valorSaque < 0)
    {
        throw std::runtime_error("Nao e possivel sacar um valor negativo.");
    }
    if (saldo < valorSaque + taxa)
    {
        throw std::runtime_error("Saldo indisponivel para saque.");
    }
    saldo = saldo - valorSaque - taxa;
    std::cout << "Saque no valor de " << valorSaque << " reais realizado com sucesso!" << std::endl;
}

/**
 * @brief Realiza um deposito na conta
 * @details Responsável por adicionar valor na conta dos usuários,
 * sendo ilimitado o valor de depósito feito por cada um.
 * 
 * @param valorDeposito Valor escolhido para ser depositado.
 */
void Conta::realizaDeposito(float valorDeposito)
{
    if (valorDeposito < 0)
    {
        throw std::runtime_error("Nao e possivel depositar um valor negativo.");
    }
    saldo += valorDeposito;
    std::cout << "Deposito no valor de " << valorDeposito << " reais realizado com sucesso!" << std::endl;
}

/**
 * @brief Retorna o saldo da conta
 * 
 * @return float Retorna o valor do saldo disponível.
 */
float Conta::get_saldo()
{
    return saldo;
}

/**
 * @brief Imprime o saldo da conta
 * 
 */
void Conta::imprimeSaldo()
{
    std::cout << "Saldo de " << titular.get_nome() << ": " << saldo << " reais." << std::endl;
}

/**
 * @brief Transfere dinheiro para outro usuário
 * @details Responsável pelas transferênias de dinheiro entre as contas criadas
 * no banco.
 * 
 * @param userDestino Usuário que irá receber o valor
 * @param valor Valor a ser transferido
 * @param contas Conta a ter o valor acrescido.
 */
void Conta::transfere(std::string userDestino, float valor, std::map<std::string, Conta *> contas)
{
    Conta *contaDestino = contas[userDestino];
    if (saldo >= valor)
    {
        enviaValor(valor);
        contaDestino->recebeValor(valor);
        std::cout << "Transferencia no valor de " << valor << " reais realizada de " << titular.get_nome() << " para " << contaDestino->titular.get_nome() << "." << std::endl;
    }
    else
    {
        throw std::runtime_error("Saldo indisponivel para transferencia.");
    }
}

/**
 * @brief Destruir o objeto Conta:: Conta
 * @details Criado para ter um mecanismo de encerramento do código, encerra todas 
 * as contas de uma vez.
 * 
 */
Conta::~Conta()
{
    std::cout << "Conta de " << titular.get_nome() << " encerrada." << std::endl;
}

/**
 * @brief Coleta o usuário titular
 * 
 * @return Titular* Retorna o titular da conta
 */
Titular *Conta::get_titular()
{
    return &titular;
}

/**
 * @brief Envia um valor para outra conta
 * @details Criada com a função de enviar valores para outras contas e suas 
 * determinadas exceções.
 * 
 * @param valor valor a ser enviado.
 */
void Conta::enviaValor(float valor)
{
    if (valor < 0)
    {
        throw std::runtime_error("Nao é possivel enviar um valor negativo.");
    }
    else
    {
        saldo -= valor;
    }
}

/**
 * @brief Recebe um valor de outra conta
 * @details Responsável por organizar as contas que recebem os valores.
 * 
 * @param valor Valor a ser recebido.
 */
void Conta::recebeValor(float valor)
{
    if (valor < 0)
    {
        throw std::runtime_error("Nao é possivel receber um valor negativo.");
    }
    else
    {
        saldo += valor;
    }
}
