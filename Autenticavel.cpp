#include "Autenticavel.hpp"



Autenticavel::Autenticavel(std::string senha){

}

bool Autenticavel::autentica(std::string senha)const{
    if (senha==this->senha){
        return true;
    }else{
        return false;
    }
}