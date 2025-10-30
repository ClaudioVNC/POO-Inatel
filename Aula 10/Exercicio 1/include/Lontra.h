#ifndef LONTRA_H
#define LONTRA_H

#include "Mamifero.h"

class Lontra : public Mamifero
{
public:
    Lontra(string nome, double vida);

    void emitirSom();
};

#endif
