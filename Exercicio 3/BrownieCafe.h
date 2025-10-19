#ifndef BROWNIECAFE_H
#define BROWNIECAFE_H

#include "Brownie.h"

class BrownieCafe : public Brownie
{
public:
    BrownieCafe(string nome, double preco, string sabor);

    void adicionaCafe();
    void addCarrinhoDeCompras() override;
};

#endif
