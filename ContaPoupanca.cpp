#include"ContaPoupanca.hpp"
#include<iostream>



ContaPoupanca::ContaPoupanca(std::string numero,Titular titular):Conta(numero,titular){

}

float ContaPoupanca::taxaDeSaque()const{
     std::cout<<"Chamando método sacar da conta poupança"<<std::endl; 
    return 0.1; 
}

