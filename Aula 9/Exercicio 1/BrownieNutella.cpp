#include "BrownieNutella.h"

BrownieNutella::BrownieNutella(string nome, double preco, string sabor)
    : Brownie(nome, preco, sabor)
{
}

void BrownieNutella::adicionaNutella()
{
    cout << nome << " adicionando mais nutella" << endl;
}
