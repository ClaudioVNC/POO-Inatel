#include "../include/Boi.h"

Boi::Boi(string nome, double vida)
    : Mamifero(nome, vida)
{
}

void Boi::emitirSom()
{
    cout << nome << ": Muuu!" << endl;
}
