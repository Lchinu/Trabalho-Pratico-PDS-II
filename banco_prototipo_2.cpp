#include <iostream>
#include <string>
#include <vector>
#include <map>
//#include "existe.hpp"

using namespace std;

bool existe(std::string palavra, std::vector<std::string>vetor){
    for(int i=0;i<vetor.size();i++){
        if (vetor[i] == palavra){
            return true;
        }
    }
    return false;
}


class Cpf{
    private:
        string numero;
        bool cpfValido(){
            return numero.size() == 11;
        }
    public:
        Cpf(string n) : numero(n){
            if(!cpfValido()){
               cout << "Cpf invalido!" << endl; 
            }
        }
        string get_numero(){
        	return numero;
		}

};

class Pessoa{
    protected:
        string nome;
        int idade;
        Cpf cpf;
    public:
        Pessoa(string n, int i, string c) : nome(n), idade(i), cpf(c){/*cout << "Pessoa criada com sucesso!" << endl;*/}
        string get_nome(){
            return nome;
        }
        int get_idade(){
            return idade;
        }
        string get_cpf(){
            return cpf.get_numero();
        }

};

class Titular : public Pessoa{
    private:
        string senha;
        string usuario;
    public:
        Titular(string n, int i, string c,string u, string s) : Pessoa(n,i,c), 
        usuario(u),
        senha(s)
        {cout << "Titular criado com sucesso!" << endl;}
        Titular(string n, int i, string c) : Pessoa(n,i,c){}
        string get_senha(){
            return senha;
        }
        string get_usuario(){
            return usuario;
        }
};

class Funcionario : public Pessoa{
    private:
        float salario;
    public:
        Funcionario(string n, int i, string c, float s) : Pessoa(n,i,c),
        salario(s)
        {cout << "Funcionario criado com sucesso." << endl;}
        float get_salario(){
            return salario;
        }
        virtual float bonificacao(){
            return 0;
        }
};

class Caixa : public Funcionario{
    public:
        Caixa(string n, int i, string c, float s) : Funcionario(n,i,c,s){}
        float bonificacao() override{
            return get_salario()*0.1;
        }
};

class Gerente : public Funcionario{
    public:
        Gerente(string n, int i, string c, float s) : Funcionario(n,i,c,s){}
        float bonificacao() override{
            return get_salario()*0.5;
        }
};

class Conta{
    protected:
        Titular titular;
        float saldo;
        virtual float taxaSaque(){
        	return 0.05;
		}
    public:
        Conta(Titular t) : titular(t){saldo = 0;}
        virtual void realizaSaque(float valorSaque);
        void realizaDeposito(float valorDeposito);
        float get_saldo(){return saldo;}
        void imprimeSaldo(){
        	cout << "Saldo de " << titular.get_nome() << ": " << saldo << " reais." << endl;
		}
        void transfere(string userDestino, float valor, map<string,Conta*>contas);
        ~Conta(){cout << "Conta encerrada." << endl;}
        Titular* get_titular(){
            return &titular;
        }
};

class ContaPoupanca : public Conta{
    public:
        ContaPoupanca(Titular t) : Conta(t){}
		float taxaSaque() override;
};

class ContaUniversitaria : public Conta{
	public:
		ContaUniversitaria(Titular t) : Conta(t){}
		float taxaSaque() override;
};

class Banco{    
    public:
        //string nome = "";
        vector<string>Users;
        map<string,Conta*>Contas;
        float saldo;
    public:
        Banco(){
            cout << "Banco criado." << endl;
            saldo = 10000;
        }
        void adicionaConta(Conta &conta);
        Conta* login();
        int selecionaOperacao();
        void realizaOperacao(int opcao, Conta* conta);
        float get_saldo(){
            return saldo;
        }
};





int main(){
    
   
    Banco banco;
	
	Titular t1("Matheus", 23, "13535745632","mathewshq", "2607");
	ContaUniversitaria c1(t1);
    banco.adicionaConta(c1);
    
	Titular t2("Paulo", 22, "12782581678", "pauloh", "8600");
	ContaPoupanca p1(t2);
    banco.adicionaConta(p1);

    Conta* contaLogada = banco.login();

    int operacao = 0;
    do{
    operacao = banco.selecionaOperacao();

    banco.realizaOperacao(operacao, contaLogada);

    if (operacao == 5){
        system("cls");
        contaLogada = banco.login();
    }
    
    }while(operacao != 6);


    return 0;    
}


void Banco::realizaOperacao(int opcao, Conta* conta){
    if(opcao == 1){
        float valorSaque;
        if (valorSaque <= saldo){
        cout << "Digite o valor do saque: " << endl;
        cin >> valorSaque;
        conta->realizaSaque(valorSaque);
        }else{
            cout << "Saldo do banco insufucuente para esse saque.\n";
        }
    }else if(opcao == 2){
        float valorDeposito;
        cout << "Digite o valor do deposito: " << endl;
        cin >> valorDeposito;
        conta->realizaDeposito(valorDeposito);
    }else if(opcao == 3){
        float valorTransferencia;
        string userReceber;
        cout << "Informe o valor a ser transferido e o usuario de quem vai receber: " << endl;
        cin >> valorTransferencia >> userReceber;
        conta->transfere(userReceber, valorTransferencia, Contas);
    }else if(opcao == 4){
        conta->imprimeSaldo();
    }
}

int Banco::selecionaOperacao(){
            int opcao;
            cout << "Digite a opcao referente a sua operacao:\n(1)Saque\n(2)Deposito\n(3)Transferencia\n(4)Saldo\n(5)Fazer login\n(6)Encerrar operacao." << endl;
            cin >> opcao;
            return opcao;
        }

void Banco::adicionaConta(Conta &conta){
            string nomeDoUsuario = conta.get_titular()->get_usuario();
            Contas[nomeDoUsuario] = &conta;
            Users.push_back(nomeDoUsuario);
}

Conta* Banco::login(){
                bool logado = false;
                string user;
                string key;
                do{
                cout << "Insira seu nome de usuario: " << endl;
                cin >> user;
                if(existe(user, Users)){
                    cout << "Insira sua senha: " << endl;
                    cin >> key;
                    if (key == Contas[user]->get_titular()->get_senha()){
                        system("cls");
                        cout << "Login bem sucedido!\nBem vindo, " << Contas[user]->get_titular()->get_nome() << "." << endl;
                        logado = true;
                    }else{
                        cout << "Senha incorreta." << endl;
                        logado = false;
                    }
                }else{
                    cout << "Ususario nao existe!" << endl;
                }
            }while(!logado);

            return Contas[user];
        }

void Conta::realizaSaque(float valorSaque){
    float taxa = valorSaque*taxaSaque();
    if(valorSaque<0){
        cout << "Nao eh possivel realizar saque de valores negativos." << endl;
        return;
    }
    if(saldo < valorSaque + taxa){
    	cout << "Saldo indisponivel para sacar esse valor." << endl;
    	return;
	}
    saldo = saldo-valorSaque-taxa;
    cout << "Saque no valor de " << valorSaque << " reais realizado com sucesso!" << endl;
}

void Conta::realizaDeposito(float valorDeposito){
    if(valorDeposito < 0){
        cout << "Nao eh possivel realizar deposito de valores negativos." << endl;
        return;
    }
    saldo += valorDeposito;
    cout << "Deposito no valor de " << valorDeposito << " reais realizado com sucesso!" << endl;
}

void Conta::transfere(string userDestino, float valor, map<string,Conta*>contas){
    Conta* contaDestino = contas[userDestino];
    if (saldo >= valor){
    realizaSaque(valor);
    contaDestino->realizaDeposito(valor);
    cout << "Transferencia no valor de " << valor << " reais realizada de " << titular.get_nome() << " para " << contaDestino->titular.get_nome() << "." << endl;
    }
    else{
        cout << "Saldo insuficiente para essa transferencia." << endl;
    }
}

float ContaPoupanca::taxaSaque(){
	return 0.01;
}

float ContaUniversitaria::taxaSaque(){
    return 0.0;
}


