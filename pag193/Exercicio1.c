//Ex. 1 – Implementar fila básica (init, enqueue, dequeue, empty)

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100


typedef struct {

    int dados[TAM_MAX];

    int frente, tras;

} Fila;

void inicializarFila(Fila *f) {

    f->frente = 0;

    f->tras = -1;

}


int filaVazia(Fila *f) {

    return f->tras < f->frente;

}

void enfileirar(Fila *f, int valor) {

    if (f->tras == TAM_MAX - 1) {

        printf("Overflow (Fila Cheia)!\n");

        return;

    }

    f->dados[++f->tras] = valor;

}


int desenfileirar(Fila *f) {

    if (filaVazia(f)) {

        printf("Underflow (Fila Vazia)!\n");

        return -1; // Valor de erro

    }

    return f->dados[f->frente++];

}