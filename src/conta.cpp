#include "conta.hpp"
#include "ExcecaoCpf.hpp"
#include "ExcecaoNegativo.hpp"
#include "ExcecaoSaque.hpp"
#include "ExcecaoTransferencia.hpp"



float Conta::taxaSaque()
{
    return 0.05;
}


Conta::Conta(Titular t) : titular(t)
{
    saldo = 0;
}


void Conta::realizaSaque(float valorSaque)
{
    float taxa = valorSaque * taxaSaque();
    if (valorSaque < 0)
    {
        std::cout << "===================================================================="<< std::endl;
        throw ExcecaoNegativo();
    }
    if (saldo < valorSaque + taxa)
    {
        std::cout << "===================================================================="<< std::endl;
        throw ExcecaoSaque();
    }
    std::cout << "===================================================================="<< std::endl;
    saldo = saldo - valorSaque - taxa;
    std::cout << "Saque no valor de " << valorSaque << " reais realizado com sucesso!";
    std::cout << "====================================================================\n\n";
}


void Conta::realizaDeposito(float valorDeposito)
{
    if (valorDeposito < 0)
    {
        std::cout << "====================================================================\n" << std::endl;
        throw ExcecaoNegativo();
        std::cout << "====================================================================\n" << std::endl;
    }
    std::cout << "===================================================================="<< std::endl;
    saldo += valorDeposito;
    std::cout << "Depósito no valor de " << valorDeposito << " reais realizado com sucesso!" << std::endl;
    std::cout << "\====================================================================\n" << std::endl;
    
}


float Conta::get_saldo()
{
    return saldo;
}


void Conta::imprimeSaldo()
{
    std::cout << "Saldo de " << titular.get_nome() << ": " << saldo << " reais." << std::endl;
    std::cout << "\n====================================================================\n" << std::endl;
}


void Conta::transfere(std::string userDestino, float valor, std::map<std::string, Conta *> contas)
{
    Conta *contaDestino = contas[userDestino];
    if (saldo >= valor)
    {
        enviaValor(valor);
        contaDestino->recebeValor(valor);
        std::cout << "====================================================================\n" << std::endl;
        std::cout << "Transferência no valor de " << valor << " reais realizada de " << titular.get_nome() << " para " << contaDestino->titular.get_nome() << "." << std::endl;
        std::cout << "====================================================================\n" << std::endl;
    }
    else
    {
        std::cout << "====================================================================" << std::endl;
        throw ExcecaoTransferencia();
        std::cout << "====================================================================" << std::endl;
    }
}

Conta::~Conta()
{
    std::cout << "Conta de " << titular.get_nome() << " encerrada." << std::endl;
}


Titular *Conta::get_titular()
{
    return &titular;
}


void Conta::enviaValor(float valor)
{
    if (valor < 0)
    {
        std::cout << "\n====================================================================\n" << std::endl;
        throw ExcecaoNegativo();
        std::cout << "\n====================================================================\n" << std::endl;
    }
    else
    {
        saldo -= valor;
    }
}


void Conta::recebeValor(float valor)
{
    if (valor < 0)
    {
        std::cout << "\n====================================================================\n" << std::endl;
        throw ExcecaoNegativo();
        std::cout << "\n====================================================================\n" << std::endl;
    }
    else
    {
        saldo += valor;
    }
}
