#include "Conta.hpp"
#include <iostream>

using namespace std;

void Conta::sacar (float valorASacar)
{
    if (valorASacar < 0) {
        cout << "Não pode sacar valor negativo" << endl;
        return;
    }
    
    if (valorASacar > saldo) {
        cout << "Saldo insuficiente" << endl;
        return;
    }
    
    saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        cout << "Não pode sacar valor negativo" << endl;
        return;
    }

    saldo += valorADepositar;
}

float Conta::getSaldo() const
{
    return saldo;
}

void Conta::setNomeDoTitular(string nome)
{
    nomeTitular = nome;
}

