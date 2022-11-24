#include "pessoa.hpp"

Pessoa::Pessoa(std::string n, int i, std::string c) : nome(n), idade(i), cpf(c){/*cout << "Pessoa criada com sucesso!" << endl;*/}

std::string Pessoa::get_nome(){
            return nome;
        }

int Pessoa::get_idade(){
            return idade;
        }

std::string Pessoa::get_cpf(){
    return cpf.get_numero();
}
