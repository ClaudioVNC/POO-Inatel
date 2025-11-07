# Aula 12 - Collections em C++

Atividade sobre **CollectionsAPI** em C++.

## Estrutura do Projeto

- **Exercício 1**: Lista de números double com ordenação decrescente
- **Exercício 3**: Medição de desempenho de ArrayList, HashSet e HashMap

## Como Compilar e Executar

### Exercício 1
```powershell
cd "Aula 12\Exercicio 1"
g++ -Wall -Wextra -o lista src\Main.cpp
.\lista.exe
```

### Exercício 3
```powershell
cd "Aula 12\Exercicio 3"
g++ -Wall -Wextra -o performance src\Main.cpp
.\performance.exe
```

## Conceitos Aplicados

### Exercício 1
- `vector<double>`: Lista dinâmica (equivalente ao ArrayList do Java)
- Geração de números aleatórios com `rand()` e `srand()`
- Ordenação com `sort()` usando `greater<double>()` para ordem decrescente
- Formatação de saída com `fixed` e `setprecision()`

### Exercício 3
- **`vector`**: Lista sequencial com acesso indexado (ArrayList)
- **`unordered_set`**: Conjunto sem duplicatas usando hash (HashSet)
- **`unordered_map`**: Mapa chave-valor usando hash (HashMap)
- Medição de tempo com `chrono::system_clock`
- Comparação de desempenho entre estruturas lineares e baseadas em hash