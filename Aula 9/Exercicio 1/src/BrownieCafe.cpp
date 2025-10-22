#include "../include/BrownieCafe.h"

BrownieCafe::BrownieCafe(string nome, double preco, string sabor)
    : Brownie(nome, preco, sabor)
{
}

void BrownieCafe::adicionaCafe()
{
    cout << nome << " adicionando mais cafe" << endl;
}
