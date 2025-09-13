//Ex. 4 – Inverter fila com pilha

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100

typedef struct {

    int dados[TAM_MAX];

    int frente, tras;

} Fila;

typedef struct {

    int dados[TAM_MAX];

    int topo;

} Pilha;


void inicializarPilha(Pilha *p) { p->topo = -1; }

void empilhar(Pilha *p, int valor) { p->dados[++p->topo] = valor; }

int desempilhar(Pilha *p) { return p->dados[p->topo--]; }

int pilhaVazia(Pilha *p) { return p->topo == -1; }



void inverterFila(Fila *fila) {

    Pilha pilhaAuxiliar;

    inicializarPilha(&pilhaAuxiliar);



    while (!filaVazia(fila)) {

        empilhar(&pilhaAuxiliar, desenfileirar(fila));

    }

    while (!pilhaVazia(&pilhaAuxiliar)) {

        enfileirar(fila, desempilhar(&pilhaAuxiliar));

    }

}