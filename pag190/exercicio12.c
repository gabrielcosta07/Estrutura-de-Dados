#include <stdio.h>

int main() {
    int v[5], i, soma = 0;
    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("Os numeros digitados foram: ");
    for (i = 0; i < 5; i++) {
        printf("%d", v[i]);
        if (i < 4) printf(" + ");
    }
    printf(" = %d\n", soma);
    return 0;
}
