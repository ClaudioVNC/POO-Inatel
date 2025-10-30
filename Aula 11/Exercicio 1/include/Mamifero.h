#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <string>
#include <iostream>

using namespace std;

class Mamifero
{
protected:
    string nome;
    double vida;

public:
    Mamifero(string nome, double vida);

    virtual void emitirSom() = 0;

    virtual void mostraInfo();

    string getNome();
    double getVida();
};

#endif
