#include "Brownie.h"

Brownie::Brownie(string nome, double preco, string sabor)
{
    this->nome = nome;
    this->preco = preco;
    this->sabor = sabor;
}

void Brownie::addCarrinhoDeCompras()
{
    cout << "Adicionando no carrinho de compras um: " << nome << endl;
}

void Brownie::calculaValorTotalCompra()
{
    cout << "Calculando valor total da compra de um: " << nome << ": " << preco << endl;
}

void Brownie::mostraInfo()
{
    cout << "Nome do produto: " << nome << endl;
    cout << "Preco do produto: " << preco << endl;
    cout << "Sabor do produto: " << sabor << endl;
    cout << endl;
}

string Brownie::getNome()
{
    return nome;
}

double Brownie::getPreco()
{
    return preco;
}

string Brownie::getSabor()
{
    return sabor;
}
