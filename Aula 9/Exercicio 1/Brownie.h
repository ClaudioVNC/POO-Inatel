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

    void addCarrinhoDeCompras();
    virtual void calculaValorTotalCompra(); // Descobri que para usar polimorfismo no C++ é necessário declarar o método como virtual
    virtual void mostraInfo();

    string getNome();
    double getPreco();
    string getSabor();
};

#endif
