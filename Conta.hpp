#pragma once
#include <iostream>
#include <string>


using namespace std;

class Conta
{
    private:
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo = 0;
    
    public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float getSaldo() const; //recupera
    void setNomeDoTitular(std::string nome);
    string getNumero ();


};