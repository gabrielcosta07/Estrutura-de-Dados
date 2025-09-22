#include <stdio.h>

int main() {
    int m[2][4], i, j, pares = 0, somaPares = 0;
    for (i = 0; i < 2; i++) for (j = 0; j < 4; j++) scanf("%d", &m[i][j]);
    for (i = 0; i < 2; i++) {
        int cont = 0;
        for (j = 0; j < 4; j++) {
            if (m[i][j] >= 12 && m[i][j] <= 20) cont++;
            if (m[i][j] % 2 == 0) { somaPares += m[i][j]; pares++; }
        }
        printf("Linha %d: %d elementos entre 12 e 20\n", i, cont);
    }
    if (pares > 0) printf("Media pares: %.2f\n", (float)somaPares / pares);
    else printf("Nao ha pares\n");
    return 0;
}
