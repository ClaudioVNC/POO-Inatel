# Aula 11 - Interface em C++

## Exercício 1 - Mamíferos com Interface Aquatico

Este exercício demonstra o uso de **interfaces** em C++ através de classes abstratas puras. A interface `Aquatico` define um contrato que deve ser implementado pelas classes que representam animais aquáticos.

### Estrutura do Projeto

```
Exercicio 1/
├── include/
│   ├── Aquatico.h       # Interface com método nadar()
│   ├── Mamifero.h       # Classe abstrata base
│   ├── Lontra.h         # Herda de Mamifero e implementa Aquatico
│   ├── Cachorro.h       # Herda apenas de Mamifero
│   └── Boi.h            # Herda apenas de Mamifero
└── src/
    ├── Mamifero.cpp
    ├── Lontra.cpp
    ├── Cachorro.cpp
    ├── Boi.cpp
    └── Main.cpp
```

### Conceitos Demonstrados

1. **Interface**: `Aquatico` é uma interface pura (classe abstrata com apenas métodos virtuais puros)
2. **Herança Múltipla**: `Lontra` herda de `Mamifero` e implementa a interface `Aquatico`
3. **Polimorfismo**: Objetos podem ser tratados através de ponteiros da classe base ou da interface
4. **Classes Abstratas**: `Mamifero` possui método virtual puro `emitirSom()`

### Diagrama UML

- **Mamifero**: Classe abstrata base com atributos `nome` e `vida`
- **Aquatico**: Interface com método `nadar()`
- **Lontra**: Herda de Mamifero e implementa Aquatico
- **Cachorro** e **Boi**: Herdam apenas de Mamifero

### Exercício 1
```bash
cd "Aula 11/Exercicio 1"
g++ -o programa src/Main.cpp src/Mamifero.cpp src/Lontra.cpp src/Cachorro.cpp src/Boi.cpp
./programa
```

### Saída Esperada

O programa demonstra:
- Emissão de sons por cada animal
- Polimorfismo através de ponteiros da classe base
- Uso da interface Aquatico pela Lontra
