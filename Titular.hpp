#pragma once
#include <string>
#include <iostream>

using namespace std;
class Titular
{
private:
    std::string cpf;
    std::string nome;
    void verificaTamanhDoNome();

public:
    Titular(std::string cpf, std::string nome);
    std::string getNomeDoTitular() const;
};
