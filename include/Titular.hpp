#pragma once
#include <string>
#include "Pessoa.hpp"

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
