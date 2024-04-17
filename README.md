
# TDD - Pilha com lista

Este é o código exemplo do trabalho usando TDD (*Test Driven Development*) com o framework C++ [Catch2](https://github.com/catchorg/Catch2).

## Tarefa

Modifique o arquivo [pilha.c](pilha.c) para completar as funções:
- `pilha_cria`: cria uma pilha vazia.
- `pilha_empilha`: insere um novo elemento no topo da pilha.
- `pilha_desempilha`: remove um elemento do topo da pilha.
- `pilha_topo`: retorna o valor do elemento no topo da pilha, sem desempilhar.
- `pilha_destroi`: libera toda a memória da pilha.

O resultado estará disponível na aba **Actions** do Github a cada alteração.

## Test Drive Development

O framework Catch2 consegue ser utilizado localmente com os arquivos [catch_amalgamated.hpp](catch_amalgamated.hpp)  e [catch_amalgamated.cpp](catch_amalgamated.cpp) sem necessidade de instalação.

**NÃO MODIFIQUE OS TESTES** 

O teste pode ser feito localmente com os comandos abaixo:
```
g++ -Wall -g -c catch_amalgamated.cpp
g++ -Wall -g -c testes.cpp
gcc -Wall -g -c pilha.c
g++ -Wall -g pilha.o testes.o  catch_amalgamated.o
valgrind --leak-check=full ./a.out --reporter compact --success
```