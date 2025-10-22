#include "../include/Lontra.h"

Lontra::Lontra(string nome, double vida)
    : Mamifero(nome, vida) {
}

Lontra::~Lontra() {
}

void Lontra::emitirSom() {
    cout << nome << ": Eii!" << endl;
}
