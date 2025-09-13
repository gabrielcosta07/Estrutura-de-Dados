//Ex. 8 – Remover pares

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100

typedef struct {

    int dados[TAM_MAX];

    int frente, tras;

} Fila;

void removerNumerosPares(Fila *filaPrincipal) {

    Fila filaTemporaria;

    inicializarFila(&filaTemporaria);



    while (!filaVazia(filaPrincipal)) {

        int valorAtual = desenfileirar(filaPrincipal);

        if (valorAtual % 2 != 0) { 

            enfileirar(&filaTemporaria, valorAtual);

        }

    }

    *filaPrincipal = filaTemporaria;

}

