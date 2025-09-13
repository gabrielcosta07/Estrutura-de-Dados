//Ex. 9 – Remover duplicados

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int dado;

    struct No *proximo;

} No;

void removerDuplicados(No* cabeca) {

    for (No* iteradorExterno = cabeca; iteradorExterno; iteradorExterno = iteradorExterno->proximo) {

        No* noAnterior = iteradorExterno;

        for (No* iteradorInterno = iteradorExterno->proximo; iteradorInterno;) {

            if (iteradorInterno->dado == iteradorExterno->dado) {

                noAnterior->proximo = iteradorInterno->proximo;

                free(iteradorInterno);

                iteradorInterno = noAnterior->proximo;

            } else {

                noAnterior = iteradorInterno;

                iteradorInterno = iteradorInterno->proximo;

            }

        }

    }

}


