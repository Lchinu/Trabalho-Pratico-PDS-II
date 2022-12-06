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
    std::cout << "\n\n    ============ Seja bem-vindo ao NossoBanco! ================" << std::endl;
    std::cout << "====================================================================\n";
    saldo = 10000;
}


void Banco::realizaOperacao(int opcao, Conta *conta)
{
    if (opcao == 1)
    {
        float valorSaque;
        std::cout << "====================================================================\n";
        std::cout << "Digite o valor do saque ou digite 9 para cancelar a operação" << std::endl;
        std::cout << "↓\n";
        std::cin >> valorSaque;
        system("clear");
        if (valorSaque == 9){
            system("clear");
            Banco::selecionaOperacao();
        }
            else { 
            if (valorSaque <= saldo)
            {
                conta->realizaSaque(valorSaque);
                Transacao t(valorSaque, "Saque", conta->get_titular()->get_nome());
            transacoes.push_back(t);
            }
            else
            { 
                std::cout << "====================================================================\n";
                throw std::runtime_error("\nSeu saldo não é suficiente para este saque!");
                std::cout << "====================================================================\n";
            }
        }
    }

    else if (opcao == 2)
    {
            float valorDeposito;
            std::cout << "====================================================================\n";
            std::cout << "Digite o valor do depósito ou digite 9 para cancelar a operação" << std::endl;
            std::cout << "↓\n";
            std::cin >> valorDeposito;
            system("clear");
                if (valorDeposito == 9){
                    system("clear");
                    Banco::selecionaOperacao();
                }
            else 
            {
            conta->realizaDeposito(valorDeposito);
            Transacao t(valorDeposito, "Depósito", conta->get_titular()->get_nome());
            transacoes.push_back(t);
        }
    }
    else if (opcao == 3)
    {
            float valorTransferencia;
            bool usuarioExiste =  false;
            std::string userReceber;
            std::cout << "\nInforme o valor a ser transferido e o usuário de quem vai receber ou digite 9 para cancelar a operação: " << std::endl;
            std::cout << "↓\n";
            std::cin >> valorTransferencia >> userReceber;
            system("clear");
            if (valorTransferencia == 9){
                    system("clear");
                Banco::selecionaOperacao();
                }
            else if (valorTransferencia != 9) {
                while(!usuarioExiste){
                    if(existe(userReceber,Users)){
        	            usuarioExiste = true;
                }         
        
                    else {
			            usuarioExiste = false;
                        std::cout << "====================================================================\n";
			            std::cout << "Digite um usuário válido.\n";
                        std::cout << "====================================================================\n";
		                }

            conta-> transfere(userReceber, valorTransferencia, Contas);
            Transacao t(valorTransferencia, "Transferência", conta->get_titular()->get_nome());
            transacoes.push_back(t);
            }
        }    
    } 
    else if (opcao == 4)
    {
        conta->imprimeSaldo();
    }
    else if (opcao == 5)
    {
        std::cout << "====================================================================\n";
    }
    else if (opcao == 6)
    {   
        if (transacoes.size() == 0) {
            system("clear");
            std::cout << "====================================================================\n";
            std::cout << "Nenhuma transação foi realizada!\n";
            std::cout << "====================================================================\n";
        }
        else if (transacoes.size() != 0) {
        std::cout << "====================================================================\n";
        std::cout << "Extrato: \n\n";
            imprimeExtrato(); 
        std::cout << "====================================================================\n";
        }
    }
    else if (opcao == 7)
    { 
        std::cout << "\n============ Agradecemos por utilizar o NossoBanco! ================" << std::endl;
        std::cout << "====================================================================\n";
    }      
}


int Banco::selecionaOperacao()
{
    int opcao;
    std::cout << "Digite a opção referente a sua operação: " << std::endl;
    std::cout << "[1] - Saque\n[2] - Depósito\n[3] - Transferência\n[4] - Saldo\n[5] - Fazer login\n[6] - Extrato\n[7] - Finalizar operação\n" << std::endl;
    std::cout << "====================================================================\n";
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
        std::cout << "\n====================================================================\n\n";
        std::cout << "Insira seu nome de usuário: ➡  ";
        std::cin >> user;
        if (existe(user, Users))
        { // verifica se o nome de usuario digitado existe no vetor banco de usuarios;
            std::cout << "Insira sua senha de 4 dígitos: ➡  ";
            std::cin >> key;
            if (key == Contas[user]->get_titular()->get_senha())
            { //  verifica se a senha informada confere com a senha da conta referente ao nome de usuario
                system("clear");
                std::cout << "====================================================================\n\n";
                std::cout << "Login bem sucedido! Seja bem-vindo, " << Contas[user]->get_titular()->get_nome() << "." << std::endl;
                std::cout << "\n====================================================================\n\n";
                logado = true;
            }
            else
            {
                std::cout << "Senha incorreta. Tente novamente! ";
                logado = false;
            }
        }
        else
        {
            std::cout << "Este usuário não existe! Tente novamente!" << std::endl;
        }
    } while (!logado);

    return Contas[user];
}

   void Banco::imprimeExtrato(){
    for(int i=0;i<transacoes.size();i++){
        std::cout << "Tipo de transação: " << transacoes[i].get_tipo() << " ↦ Valor: " << transacoes[i].get_valor() << " ↦ Autor: " << transacoes[i].get_autor() << std::endl;
        std::cout << std::endl;
    }
}