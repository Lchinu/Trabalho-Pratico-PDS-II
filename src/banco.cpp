
#include "banco.hpp"


bool existe(std::string palavra, std::vector<std::string> vetor)
{
    for (unsigned int i = 0; i < vetor.size(); i++)
    {
        if (vetor[i] == palavra)
        {
            return true;
        }
    }
    return false;
}


Banco::Banco()
{
    std::cout << "\n\n*******Bem Vindo ao Banco!*******" << std::endl;
    std::cout << "*********************************\n\n"
              << std::endl;
    saldo = 10000;
}


void Banco::realizaOperacao(int opcao, Conta *conta)
{
    if (opcao == 1)
    {
        float valorSaque;
        std::cout << "Digite o valor do saque: " << std::endl;
        std::cin >> valorSaque;
        if (valorSaque <= saldo)
        {
            conta->realizaSaque(valorSaque);
            Transacao t(valorSaque, "Saque", conta->get_titular()->get_nome());
        transacoes.push_back(t);
        }
        else
        {
            throw std::runtime_error("Saldo indisponivel para saque.");
        }
    }
    else if (opcao == 2)
    {
        float valorDeposito;
        std::cout << "Digite o valor do deposito: " << std::endl;
        std::cin >> valorDeposito;
        conta->realizaDeposito(valorDeposito);
        Transacao t(valorDeposito, "Deposito", conta->get_titular()->get_nome());
        transacoes.push_back(t);
    }
    else if (opcao == 3)
    {
        float valorTransferencia;
        std::string userReceber;
        bool usuarioExiste = false;
        std::cout << "Informe o valor a ser transferido e o usuario de quem vai receber: " << std::endl;
        std::cin >> valorTransferencia;
         while(!usuarioExiste){
		std::cin >> userReceber;
        if(existe(userReceber,Users)){
        	usuarioExiste = true;
        	break;
		}else{
			usuarioExiste = false;
			std::cout << "Digite um usuario valido.\n";
		}
        }

        conta->transfere(userReceber, valorTransferencia, Contas);
        Transacao t(valorTransferencia, "Transferencia", conta->get_titular()->get_nome());
        transacoes.push_back(t);
    }
    else if (opcao == 4)
    {
        conta->imprimeSaldo();
    }else if(opcao == 7){
            std::cout << "EXTRATO: \n\n";
            imprimeExtrato();  
    }
}


int Banco::selecionaOperacao()
{
    int opcao;
    std::cout << "Digite a opcao referente a sua operacao:\n(1)Saque\n(2)Deposito\n(3)Transferencia\n(4)Saldo\n(5)Fazer login\n(6)Encerrar operacao." << std::endl;
    std::cin >> opcao;
    return opcao;
}


void Banco::adicionaConta(Conta &conta)
{
    std::string nomeDoUsuario = conta.get_titular()->get_usuario();
    Contas[nomeDoUsuario] = &conta;
    Users.push_back(nomeDoUsuario);
}


Conta *Banco::login()
{
    bool logado = false;
    std::string user;
    std::string key;
    do
    {
        std::cout << "Insira seu nome de usuario: " << std::endl;
        std::cin >> user;
        if (existe(user, Users))
        { // verifica se o nome de usuario digitado existe no vetor banco de usuarios
            std::cout << "Insira sua senha: " << std::endl;
            std::cin >> key;
            if (key == Contas[user]->get_titular()->get_senha())
            { //  verifica se a senha informada confere com a senha da conta referente ao nome de usuario
                system("cls");
                std::cout << "Login bem sucedido!\nBem vindo, " << Contas[user]->get_titular()->get_nome() << "." << std::endl;
                logado = true;
            }
            else
            {
                std::cout << "Senha incorreta." << std::endl;
                logado = false;
            }
        }
        else
        {
            std::cout << "Ususario nao existe!" << std::endl;
        }
    } while (!logado);

    return Contas[user];
    
}
void Banco::imprimeExtrato(){
    for(int i=0;i<transacoes.size();i++){
        std::cout << "Tipo de transacao: " << transacoes[i].get_tipo() << " -> Valor: " << transacoes[i].get_valor() << " -> Autor: " << transacoes[i].get_autor() << std::endl;
        std::cout << std::endl;
    }
}