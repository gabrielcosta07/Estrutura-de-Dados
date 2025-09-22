#include <stdio.h>

int main() {
    char nomes[10][50];
    int codigos[10];
    float precos[10], novo;
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
        scanf("%d", &codigos[i]);
        scanf("%f", &precos[i]);
    }
    for (i = 0; i < 10; i++) {
        if (codigos[i] % 2 == 0 && precos[i] > 1000) novo = precos[i] * 1.2;
        else if (codigos[i] % 2 == 0) novo = precos[i] * 1.15;
        else if (precos[i] > 1000) novo = precos[i] * 1.1;
        else continue;
        printf("%s %d %.2f %.2f\n", nomes[i], codigos[i], precos[i], novo);
    }
    return 0;
}
