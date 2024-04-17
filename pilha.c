/*
 * pilha.c
 * Implementação da TAD pilha_t - pilha.
 *
 * The MIT License (MIT)
 * 
 * Copyright (c) 2024 João Vicente, UFSM
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

/* estrutura TAD lista_t */
struct _lista {
	void* dado;
	struct _lista* prox;
};

typedef struct _lista	lista_t;

/* define a struct TAD pilha */
struct _pilha {
	lista_t* primeiro;
};


/* cria uma pilha vazia, sendo:
 * - alocar memória para a pilha (chamar malloc)
 * - atribuir o valor incial de elmentos da pilha (n = 0)
 * - retorna a pilha criada
 */
pilha_t* pilha_cria (void)
{
	/* TODO implementar aqui a criação da pilha */
	printf("ERRO! Falha ao alocar a pilha!\n");
	exit(-1);
}

/* retorna se a pilha esta vazia (true), ou false caso contrario */
int pilha_vazia( pilha_t* p )
{
	return 1;
}

/* insere um elemento na pilha, sendo:
 * - verificar se a quantidade de elementos da pilha (p->n) é menor que o número máximo de elementos (N)
 * - próxima posição livre = p->n
 * - após atribuir o dado ao vetor, incrementa p->n 
 */
int pilha_empilha( pilha_t* p, void* dado )
{
	/* TODO implementar aqui a inserção */
	return 0;
}

/* Retorna o elemento no topo da pilha, sem desempilhar.
 * NULL caso a pilha seja vazia.
 */
void* pilha_topo( pilha_t* p )
{
	/* TODO implementar aqui */
	return NULL;
}


/* retira o elemento do topo da pilha, sendo:
 * - verificar se a pilha está vazia (chamar função pilha vazia)
 * - topo da pilha = p->n-1
 * - após armazenar o dado, é preciso decrementar p->n antes de retorná-lo
 */
void pilha_desempilha( pilha_t* p ) 
{
	/* TODO implementar aqui a remoção */
}

/* remove todos os elementos */
void pilha_destroi( pilha_t* p )
{
	/* TODO terminar */
}
