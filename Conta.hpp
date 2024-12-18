#pragma once
#include <iostream>
#include <string>
#include "Titular.hpp"


using namespace std;

class Conta
{
    public:
    static int recuperaNumeroDeContas();

    private:
    string numero;
    Titular titular;
    float saldo = 0;
    static int numeroDeContas;
    
    public:
    Conta(std::string numero, Titular titular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float getSaldo() const; //recupera
    string getNumero ();


};