#include "../include/Boi.h"

Boi::Boi(string nome, double vida)
    : Mamifero(nome, vida) {
}

Boi::~Boi() {
}

void Boi::emitirSom() {
    cout << nome << ": Muu!" << endl;
}
