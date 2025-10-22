# Aula 10 - Programação Orientada a Objetos (POO)

Atividade sobre **Classes Abstratas e Polimorfismo** em C++.

## Estrutura do Projeto

- **Exercicio 1**: Classe abstrata `Mamifero` e subclasses (`Cachorro`, `Lontra`, `Boi`)

## Como Compilar e Executar

### Exercício 1
```powershell
cd "Aula 10\Exercicio 1"
g++ -Wall -Wextra -o mamifero src\Main.cpp src\Mamifero.cpp src\Cachorro.cpp src\Lontra.cpp src\Boi.cpp
.\mamifero.exe
```

## Conceitos Aplicados

- Classes abstratas (método puro / pure virtual)
- Polimorfismo via ponteiros/referências para a classe base
- Sobrescrita de métodos em classes derivadas
- Destrutor virtual para segurança ao deletar por ponteiro da base
