#include "conta.hpp"

float Conta::taxaSaque(){
    return 0.05;
}

Conta::Conta(Titular t) : titular(t){saldo = 0;}

void Conta::realizaSaque(float valorSaque){
    float taxa = valorSaque*taxaSaque();
    if(valorSaque<0){
        std::cout << "Nao eh possivel realizar saque de valores negativos." << std::endl;
        return;
    }
    if(saldo < valorSaque + taxa){
    	std::cout << "Saldo indisponivel para sacar esse valor." << std::endl;
    	return;
	}
    saldo = saldo-valorSaque-taxa;
    std::cout << "Saque no valor de " << valorSaque << " reais realizado com sucesso!" << std::endl;
}

void Conta::realizaDeposito(float valorDeposito){
    if(valorDeposito < 0){
        std::cout << "Nao eh possivel realizar deposito de valores negativos." << std::endl;
        return;
    }
    saldo += valorDeposito;
    std::cout << "Deposito no valor de " << valorDeposito << " reais realizado com sucesso!" << std::endl;
}

float Conta::get_saldo(){
    return saldo;
    }

void Conta::imprimeSaldo(){
        	std::cout << "Saldo de " << titular.get_nome() << ": " << saldo << " reais." << std::endl;
		}


void Conta::transfere(std::string userDestino, float valor, std::map<std::string,Conta*>contas){
    Conta* contaDestino = contas[userDestino];
    if (saldo >= valor){
    enviaValor(valor);
    contaDestino->recebeValor(valor);
    std::cout << "Transferencia no valor de " << valor << " reais realizada de " << titular.get_nome() << " para " << contaDestino->titular.get_nome() << "." << std::endl;
    }
    else{
        std::cout << "Saldo insuficiente para essa transferencia." << std::endl;
    }
}

Conta::~Conta(){
    std::cout << "Conta de "<< titular.get_nome() <<  " encerrada." << std::endl;
    }

Titular* Conta::get_titular(){
            return &titular;
        }

void Conta::enviaValor(float valor){
    if(valor<0){
        std::cout << "Nao eh possivel enviar valores negativos.\n";
        return;
    }else{
        saldo -= valor;
    }
}

void Conta::recebeValor(float valor){
    if (valor<0){
        std::cout << "Nao eh possivel receber valores negativos.\n";
        return;
    }else{
        saldo += valor;
    }
}