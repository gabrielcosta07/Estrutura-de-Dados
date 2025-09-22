#include <stdio.h>
#include <string.h>

int main() {
    char nomes[7][50];
    float medias[7], maior;
    int i, imaior = 0;
    for (i = 0; i < 7; i++) {
        scanf("%s", nomes[i]);
        scanf("%f", &medias[i]);
    }
    maior = medias[0];
    for (i = 0; i < 7; i++) if (medias[i] > maior) { maior = medias[i]; imaior = i; }
    printf("Maior media: %s %.2f\n", nomes[imaior], medias[imaior]);
    for (i = 0; i < 7; i++) if (medias[i] < 7) printf("%s precisa de %.2f\n", nomes[i], 10 - medias[i]);
    return 0;
}
