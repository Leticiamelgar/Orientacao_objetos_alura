#pragma once
#include <iostream>
#include <string>


using namespace std;

class Conta
{
    private:
    string numero;
    string nomeTitular;
    string cpfTitular;
    float saldo = 0;
    
    public:
    Conta(std::string numero,std::string nomeTitular,std::string cpfTitular);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float getSaldo() const; //recupera
    void setNomeDoTitular(std::string nome);
    string getNumero ();
    string getNomeDoTitular() const;


};