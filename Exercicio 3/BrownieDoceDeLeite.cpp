#include "BrownieDoceDeLeite.h"

BrownieDoceDeLeite::BrownieDoceDeLeite(string nome, double preco, string sabor)
    : Brownie(nome, preco, sabor)
{
}

void BrownieDoceDeLeite::adicionaDoceDeLeite()
{
    cout << nome << " adicionando mais doce de leite!!" << endl;
}

void BrownieDoceDeLeite::addCarrinhoDeCompras()
{
    cout << "Adicionando Brownie de Doce de Leite no carrinho! Tradicional e gostoso!" << endl;
}
