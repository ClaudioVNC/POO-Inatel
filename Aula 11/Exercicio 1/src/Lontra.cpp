#include "../include/Lontra.h"

Lontra::Lontra(string nome, double vida)
    : Mamifero(nome, vida)
{
}

void Lontra::emitirSom()
{
    cout << "Eii!" << endl;
}

void Lontra::nadar()
{
    cout << "Splash!" << endl;
}
