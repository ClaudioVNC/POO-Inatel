#ifndef COMPRADOR_H
#define COMPRADOR_H

#include "Brownie.h"
#include <string>

using namespace std;

class Comprador
{
private:
    string nome;
    double saldo;

public:
    Comprador(string nome, double saldo);

    void efetuarCompra(Brownie *brownie);

    string getNome();
    double getSaldo();
};

#endif
