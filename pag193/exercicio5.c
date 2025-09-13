//Ex. 5 – Duas filas no mesmo vetor

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100

typedef struct {

    int vetorCompartilhado[TAM_MAX];

    int f1_frente, f1_tras;

    int f2_frente, f2_tras;

} DuasFilas;



void inicializarDuasFilas(DuasFilas *df) {

    df->f1_frente = 0;

    df->f1_tras = -1;

    df->f2_frente = TAM_MAX - 1;

    df->f2_tras = TAM_MAX;

}

