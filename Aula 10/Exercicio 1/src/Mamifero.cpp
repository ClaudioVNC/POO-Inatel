#include "../include/Mamifero.h"

Mamifero::Mamifero(string nome, double vida)
    : nome(nome), vida(vida) {
}

Mamifero::~Mamifero() {
}

void Mamifero::mostraInfo() {
    cout << "Nome: " << nome << endl;
    cout << "Vida: " << vida << endl;
}

string Mamifero::getNome() { return nome; }

double Mamifero::getVida() { return vida; }
