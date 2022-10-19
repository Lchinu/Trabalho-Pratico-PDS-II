#pragma once 
#include<string>

class Autenticavel{

    private:
    std::string senha; ///AQUI PODE ENTRAR A LEITURA DE UM DETERMINADO ARQUIV
    public:
    Autenticavel(std::string senha);
    bool autentica(std::string senha)const;
};