#include "conta.hpp"

/**
 * @brief Configura a taxa de saque da conta
 *
 * @return float
 */
float Conta::taxaSaque()
{
    return 0.05;
}

/**
 * @brief Construtor da classe Conta
 *
 * @param t
 */
Conta::Conta(Titular t) : titular(t)
{
    saldo = 0;
}

/**
 * @brief Realiza um saque na conta
 * 
 * @param valorSaque 
 */
void Conta::realizaSaque(float valorSaque)
{
    float taxa = valorSaque * taxaSaque();
    if (valorSaque < 0)
    {
        throw std::runtime_error("Nao é possivel sacar um valor negativo.");
    }
    if (saldo < valorSaque + taxa)

    {
        throw std::runtime_error("Saldo indisponível para saque.");
    }
    std::cout << "===================================================================="<< std::endl;
    saldo = saldo - valorSaque - taxa;
    std::cout << "Saque no valor de " << valorSaque << " reais realizado com sucesso!";
    std::cout << "\n====================================================================\n\n";
}

/**
 * @brief Realiza um deposito na conta
 * 
 * @param valorDeposito 
 */
void Conta::realizaDeposito(float valorDeposito)
{
    if (valorDeposito < 0)
    {
        throw std::runtime_error("Não é possível depositar um valor negativo.");
    }
    std::cout << "===================================================================="<< std::endl;
    saldo += valorDeposito;
    std::cout << "Depósito no valor de " << valorDeposito << " reais realizado com sucesso!" << std::endl;
}

/**
 * @brief Retorna o saldo da conta
 * 
 * @return float 
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
    std::cout << "\n====================================================================\n\n" << std::endl;
}

/**
 * @brief Imprime o titular da conta
 * 
 * @param userDestino 
 * @param valor 
 * @param contas 
 */
void Conta::transfere(std::string userDestino, float valor, std::map<std::string, Conta *> contas)
{
    Conta *contaDestino = contas[userDestino];
    if (saldo >= valor)
    {
        enviaValor(valor);
        contaDestino->recebeValor(valor);
        std::cout << "Transferência no valor de " << valor << " reais realizada de " << titular.get_nome() << " para " << contaDestino->titular.get_nome() << "." << std::endl;
    }
    else
    {
        throw std::runtime_error("Saldo indisponível para transferência.");
    }
}

/**
 * @brief Destruir o objeto Conta:: Conta
 * 
 */
Conta::~Conta()
{
    std::cout << "Conta de " << titular.get_nome() << " encerrada." << std::endl;
}

/**
 * @brief Retorna o titular da conta
 * 
 * @return Titular* 
 */
Titular *Conta::get_titular()
{
    return &titular;
}

/**
 * @brief Envia um valor para outra conta
 * 
 * @param valor 
 */
void Conta::enviaValor(float valor)
{
    if (valor < 0)
    {
        throw std::runtime_error("Não é possivel enviar um valor negativo.");
    }
    else
    {
        saldo -= valor;
    }
}

/**
 * @brief Recebe um valor de outra conta
 * 
 * @param valor 
 */
void Conta::recebeValor(float valor)
{
    if (valor < 0)
    {
        throw std::runtime_error("Não é possível receber um valor negativo.");
    }
    else
    {
        saldo += valor;
    }
}
