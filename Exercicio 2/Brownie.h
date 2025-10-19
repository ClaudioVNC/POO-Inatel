#ifndef BROWNIE_H
#define BROWNIE_H

#include <string>
#include <iostream>

using namespace std;

class Brownie
{
protected:
    string nome;
    double preco;
    string sabor;

public:
    Brownie(string nome, double preco, string sabor);

    virtual void addCarrinhoDeCompras();
    virtual void calculaValorTotalCompra();
    virtual void mostraInfo();

    string getNome();
    double getPreco();
    string getSabor();
};

#endif
