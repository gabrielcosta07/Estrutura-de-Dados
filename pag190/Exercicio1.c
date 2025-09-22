#include <stdio.h>

int main() {
    int v[6], i, pares = 0, impares = 0;
    for (i = 0; i < 6; i++) scanf("%d", &v[i]);
    printf("Pares: ");
    for (i = 0; i < 6; i++) if (v[i] % 2 == 0) { printf("%d ", v[i]); pares++; }
    printf("\nQuantidade de pares: %d\n", pares);
    printf("Impares: ");
    for (i = 0; i < 6; i++) if (v[i] % 2 != 0) { printf("%d ", v[i]); impares++; }
    printf("\nQuantidade de impares: %d\n", impares);
    return 0;
}
