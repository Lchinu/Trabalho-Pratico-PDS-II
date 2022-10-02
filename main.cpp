#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Conta.cpp"

using namespace std;





int main(){

    Conta conta1;
    
    Conta conta2;
    
    
    conta1.depositar(10001);
    conta1.sacar(1000);
    cout<<conta1.olharSaldo()<<endl;

    
    










    return 0;
}