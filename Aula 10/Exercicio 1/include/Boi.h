#ifndef BOI_H
#define BOI_H

#include "Mamifero.h"

class Boi : public Mamifero {
public:
    Boi(string nome, double vida);
    virtual ~Boi();

    void emitirSom();
};

#endif
