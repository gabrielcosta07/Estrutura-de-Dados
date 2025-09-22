#include <stdio.h>

int main() {
    int v[7], i;
    for (i = 0; i < 7; i++) scanf("%d", &v[i]);
    printf("Multiplos de 2: ");
    for (i = 0; i < 7; i++) if (v[i] % 2 == 0) printf("%d ", v[i]);
    printf("\nMultiplos de 3: ");
    for (i = 0; i < 7; i++) if (v[i] % 3 == 0) printf("%d ", v[i]);
    printf("\nMultiplos de 2 e 3: ");
    for (i = 0; i < 7; i++) if (v[i] % 2 == 0 && v[i] % 3 == 0) printf("%d ", v[i]);
    return 0;
}
