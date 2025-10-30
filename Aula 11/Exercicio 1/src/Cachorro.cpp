#include "../include/Cachorro.h"

Cachorro::Cachorro(string nome, double vida)
    : Mamifero(nome, vida)
{
}

void Cachorro::emitirSom()
{
    cout << nome << ": Au Au!" << endl;
}
