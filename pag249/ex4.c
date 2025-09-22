#include <stdio.h>
#include <string.h>

int main() {
    char nomes[15][50];
    float notas[15][5], media, somaClasse = 0;
    int i, j;
    for (i = 0; i < 15; i++) scanf("%s", nomes[i]);
    for (i = 0; i < 15; i++) for (j = 0; j < 5; j++) scanf("%f", &notas[i][j]);
    for (i = 0; i < 15; i++) {
        media = 0;
        for (j = 0; j < 5; j++) media += notas[i][j];
        media /= 5;
        somaClasse += media;
        if (media >= 7) printf("%s Media: %.2f Aprovado\n", nomes[i], media);
        else if (media >= 5) printf("%s Media: %.2f Exame\n", nomes[i], media);
        else printf("%s Media: %.2f Reprovado\n", nomes[i], media);
    }
    printf("Media da classe: %.2f\n", somaClasse / 15);
    return 0;
}
