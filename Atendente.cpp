#include"Atendente.hpp"
#include<iostream>


Atendente::Atendente(Cpf cpf,std::string nome,float salario):Funcionario(cpf,nome,salario){

}



float Atendente::bonificacao()const{
    return recuperaSalario()*0.1;
}