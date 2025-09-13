//Ex. 7 – Concatenar duas filas

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100
typedef struct {
    int dados[TAM_MAX];
    int frente;
    int tras;
} Fila;
void concatenarFilas(Fila *filaDestino, Fila *filaOrigem) {

    while (!filaVazia(filaOrigem)) {

        enfileirar(filaDestino, desenfileirar(filaOrigem));

    }

}