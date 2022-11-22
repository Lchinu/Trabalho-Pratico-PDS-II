#include<iostream>
#include<string>

#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Pessoa.hpp"

using namespace std;

void ExibeSaldo(Conta &conta){ //Estou recebendo uma referência constante pois ,o método olharSaldo é um método que não modifica nada na classe , ou seja , ele também é const . 
    cout<<"O saldo da conta é : "<<conta.olharSaldo()<<endl;
}


int main(){

    Titular titular(Cpf("123.456.789-10"), "Douglas Lima");
    
    Conta umaConta("123456", titular);
    umaConta.depositar(1000);
    umaConta.sacar(499);

    ExibeSaldo(umaConta);

    Funcionario funcionario(Cpf("123.456.789-11"),"Riquelme Batista",1000);

  
    
    


   
   
   











    return 0;
}