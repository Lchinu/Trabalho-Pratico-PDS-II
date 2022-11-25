/**
 * @file banco.cpp
 * @author Lucas Fernando (lchinuzinhoplay@gmail.com)
 * @brief Classe que cria contas e seleciona operações.
 * @version 0.1
 * @date 2022-11-25
 * @details A classe banco é responsãvel por organizar as operações que 
 * constituem um caixa eletrônico como um todo e por checar se as contas 
 * realmente existem e cria propriamente o caixa, é a classe principal do projeto. 
 * 
 * 
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "banco.hpp"

/**
 * @brief Verifica se existe uma conta com o usuário passado
 * 
 * @param palavra string contendo o nome do usuário
 * @param vetor string contendo 
 * @return true em caso de conta existente
 * @return false em caso de conta inexistente
 */
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

/**
 * @brief Construtor da classe Banco
 * @details Responsável por criar um caixa eletrônico "físico", com um limite de dinheiro 
 * disponível para saque, feito pois os caixas não possuem dinheiro infinito.
 * 
 */
Banco::Banco()
{
    std::cout << "\n\n*******Bem Vindo ao Banco!*******" << std::endl;
    std::cout << "*********************************\n\n"
              << std::endl;
    saldo = 10000;
}

/**
 * @brief Realiza uma operação de acordo com a opção escolhida pelo usuário
 * @details Responsável por direcionar o usuário para as funcionalidades disponíveis 
 * em um caixa eletrônico.
 * 
 * @param opcao int com o número da operação
 * @param conta conta que irá realizar a operação escolhida
 */
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
    }
    else if (opcao == 3)
    {
        float valorTransferencia;
        std::string userReceber;
        std::cout << "Informe o valor a ser transferido e o usuario de quem vai receber: " << std::endl;
        std::cin >> valorTransferencia >> userReceber;
        conta->transfere(userReceber, valorTransferencia, Contas);
    }
    else if (opcao == 4)
    {
        conta->imprimeSaldo();
    }
}

/**
 * @brief Seleciona a operação que será realizada pelo usuário
 * @details Responsável por dar ao usuário uma maior imersão sobre o 
 * caixa eletrônico, a partir das interações.
 * 
 * @return int retorna a opção da função realizaOperacao
 */
int Banco::selecionaOperacao()
{
    int opcao;
    std::cout << "Digite a opcao referente a sua operacao:\n(1)Saque\n(2)Deposito\n(3)Transferencia\n(4)Saldo\n(5)Fazer login\n(6)Encerrar operacao." << std::endl;
    std::cin >> opcao;
    return opcao;
}

/**
 * @brief Adiciona uma conta ao banco
 *
 * 
 * @param conta contendo as informações da conta de um determinado usuário.
 */
void Banco::adicionaConta(Conta &conta)
{
    std::string nomeDoUsuario = conta.get_titular()->get_usuario();
    Contas[nomeDoUsuario] = &conta;
    Users.push_back(nomeDoUsuario);
}

/**
 * @brief Realiza o login do usuário
 * 
 * @return Conta* retorna as informações pré estabelecidas pelo usuário.
 */
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
