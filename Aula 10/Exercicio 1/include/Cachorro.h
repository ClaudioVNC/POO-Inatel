#ifndef CACHORRO_H
#define CACHORRO_H

#include "Mamifero.h"

class Cachorro : public Mamifero {
public:
    Cachorro(string nome, double vida);
    virtual ~Cachorro();

    void emitirSom();
};

#endif
