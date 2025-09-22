#include <stdio.h>

int main() {
    float v[10], soma = 0;
    int i, negativos = 0;
    for (i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        if (v[i] < 0) negativos++;
        else soma += v[i];
    }
    printf("Negativos: %d\n", negativos);
    printf("Soma positivos: %.2f\n", soma);
    return 0;
}
