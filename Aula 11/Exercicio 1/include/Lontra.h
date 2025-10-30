#ifndef LONTRA_H
#define LONTRA_H

#include "Mamifero.h"
#include "Aquatico.h"

class Lontra : public Mamifero, public Aquatico
{
public:
    Lontra(string nome, double vida);

    void emitirSom() override;
    void nadar() override;
};

#endif
