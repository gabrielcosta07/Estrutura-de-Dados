#include <stdio.h>
#include <string.h>

int main() {
    char nomes[10][50];
    float vendas[10], comissao[10], receber[10], total = 0, maior, menor;
    int i, imaior = 0, imenor = 0;
    for (i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
        scanf("%f", &vendas[i]);
        scanf("%f", &comissao[i]);
        receber[i] = vendas[i] * comissao[i] / 100;
    }
    maior = menor = receber[0];
    for (i = 0; i < 10; i++) {
        printf("%s %.2f\n", nomes[i], receber[i]);
        total += vendas[i];
        if (receber[i] > maior) { maior = receber[i]; imaior = i; }
        if (receber[i] < menor) { menor = receber[i]; imenor = i; }
    }
    printf("Total vendas: %.2f\n", total);
    printf("Maior: %s %.2f\n", nomes[imaior], maior);
    printf("Menor: %s %.2f\n", nomes[imenor], menor);
    return 0;
}
