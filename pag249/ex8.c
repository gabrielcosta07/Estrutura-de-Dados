//Ex. 8 – Contar ocorrências de valor em lista

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int dado;

    struct No *proximo;

} No;

int contarOcorrencias(No* cabeca, int valorBuscado) {

    int contador = 0;

    while (cabeca) {

        if (cabeca->dado == valorBuscado) {

            contador++;

        }

        cabeca = cabeca->proximo;

    }

    return contador;

}
