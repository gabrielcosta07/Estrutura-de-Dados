#include <stdio.h>

int main() {
    int v[15], i, achou = 0;
    for (i = 0; i < 15; i++) scanf("%d", &v[i]);
    for (i = 0; i < 15; i++) if (v[i] == 30) { printf("Posicao: %d\n", i); achou = 1; }
    if (!achou) printf("Nao existe 30\n");
    return 0;
}
