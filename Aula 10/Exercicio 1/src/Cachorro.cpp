#include "../include/Cachorro.h"

Cachorro::Cachorro(string nome, double vida)
    : Mamifero(nome, vida) {
}

Cachorro::~Cachorro() {
}

void Cachorro::emitirSom() {
    cout << nome << ": Au au!" << endl;
}
