//Ex. 10 – Criar lista inversa

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int dado;

    struct No *proximo;

} No;

No* criarCopiaInvertida(No* listaOriginal) {

    No* cabecaNovaLista = NULL;

    while (listaOriginal) {

        No* novoNo = (No*) malloc(sizeof(No));

        novoNo->dado = listaOriginal->dado;

        novoNo->proximo = cabecaNovaLista;

        cabecaNovaLista = novoNo;

        listaOriginal = listaOriginal->proximo;

    }

    return cabecaNovaLista;

}
