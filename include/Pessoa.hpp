#pragma once
#include <string>
#include "Cpf.hpp"

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
