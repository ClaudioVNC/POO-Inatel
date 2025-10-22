#include "../include/BrownieCafe.h"

BrownieCafe::BrownieCafe(string nome, double preco, string sabor)
    : Brownie(nome, preco, sabor)
{
}

void BrownieCafe::adicionaCafe()
{
    cout << nome << " adicionando mais cafe" << endl;
}

void BrownieCafe::addCarrinhoDeCompras()
{
    cout << "Adicionando Brownie de Cafe no carrinho! Que delicia!" << endl;
}
