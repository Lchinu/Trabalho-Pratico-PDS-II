#include "Gerente.hpp"
#include<iostream>


Gerente::Gerente(Cpf cpf,std::string nome,float salario):Funcionario(cpf,nome,salario){

}
float Gerente::bonificacao()const{
    return recuperaSalario()*0.3;
}