#include "Comprador.h"

Comprador::Comprador(string nome, double saldo)
{
    this->nome = nome;
    this->saldo = saldo;
}

void Comprador::efetuarCompra(Brownie *brownie)
{
    cout << endl;
    cout << nome << " esta efetuando uma compra" << endl;
    brownie->addCarrinhoDeCompras();
    brownie->calculaValorTotalCompra();
    cout << "Comprador " << nome << " comprou o brownie: " << brownie->getNome() << endl;
    saldo -= brownie->getPreco();
    cout << "Saldo restante: R$ " << saldo << endl;
}

string Comprador::getNome()
{
    return nome;
}

double Comprador::getSaldo()
{
    return saldo;
}
