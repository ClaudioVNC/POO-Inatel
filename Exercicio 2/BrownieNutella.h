#ifndef BROWNIENUTELLA_H
#define BROWNIENUTELLA_H

#include "Brownie.h"

class BrownieNutella : public Brownie
{
public:
    BrownieNutella(string nome, double preco, string sabor);

    void adicionaNutella();
    void addCarrinhoDeCompras() override;
};

#endif
