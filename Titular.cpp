#include "Titular.hpp"
#include <iostream>
#include <string>

using namespace std;

Titular :: Titular (std::string cpf, std:: string nome): cpf(cpf), nome(nome)
{
    verificaTamanhDoNome();
}

void Titular::verificaTamanhDoNome (){
  if(nome.size()<5){
    cout << "Nome muito curto" << endl;
    system ("pause");
    exit(1);
    }
}

std::string Titular::getNomeDoTitular() const { 
    return nome;
}
