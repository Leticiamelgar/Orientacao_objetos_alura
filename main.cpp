#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo (const Conta& conta)
{
    cout << "O saldo é: " << conta.getSaldo() << endl;
}

int main()
{
    Conta umaConta("123456","Vinicius","123.456.789-10");
    

    Conta umaOutraConta("123456","Vinicius","123.456.789-10");

    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);


    cout << "Nome do titular: " << umaConta.getNomeDoTitular() << endl;
    cout << "Uma conta: " << umaConta.getSaldo()<< " Outra conta: " << umaOutraConta.getSaldo() << endl;
    
    system("pause");
    return 0;
}
