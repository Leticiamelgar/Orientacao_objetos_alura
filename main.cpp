#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>

using namespace std;

void ExibeSaldo(const Conta& conta) {
    cout << "Saldo: " << conta.getSaldo() << endl;
}

int main() {
    Titular titular1("123.456.789-10", "Vinicius");
    Conta umaConta("123456", titular1);
    
    umaConta.depositar(500);
    umaConta.sacar(50);

    cout << "Nome do Titular: " << titular1.getNomeDoTitular() << endl;
    ExibeSaldo(umaConta);

    Titular titular2("098.765.432-10", "Dias");
    Conta umaOutraConta("654321", titular2);
    
    umaOutraConta.depositar(300);
    ExibeSaldo(umaOutraConta);

    system ("pause");

    return 0;
}
