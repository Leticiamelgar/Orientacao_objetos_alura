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
    Conta umaConta;
    umaConta.setNomeDoTitular("Vinicius");

    Conta umaOutraConta;

    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);
    
    cout << "Uma conta: " << umaConta.getSaldo()<< " Outra conta: " << umaOutraConta.getSaldo() << endl;
    
    system("pause");
    return 0;
}

