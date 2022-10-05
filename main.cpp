#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Conta.cpp"
#include "Titular.hpp"
#include "Titular.cpp"
#include "Cpf.hpp"
#include "Cpf.cpp"




using namespace std;

void ExibeSaldo(Conta &conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}


int main(){

   /* Cpf cpf("145.110.506-19");
    Titular titular("Riquelme Batista",cpf);
    return 0;*/




    Titular titularexemplo("Riquelme Batista Gomes da Silva ",Cpf("000.000.125-44")); //trabalhando o conceito de composição de classes e seguindo o princípio de engenharia de software : "prefira composição a classes sempre que puder"
   Conta umaConta("123456",titularexemplo);
   umaConta.depositar(1000);
   umaConta.sacar(100);
   std::cout<<"O número de contas do sistema de banco atualmente é : "<<umaConta.numeroDeContas<<std::endl;
   std::cout<<titularexemplo.cpfparametro.recuperaCpf()<<std::endl;
   std::cout<<titularexemplo.recuperaNome()<<std::endl;
   ExibeSaldo(umaConta);
   











    return 0;
}