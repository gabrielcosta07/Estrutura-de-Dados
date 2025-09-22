#include <stdio.h>

int main() {
    char meses[12][20] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    float vendas[12][4], somaMes, somaSemana[4] = {0}, somaAno = 0;
    int i, j;
    for (i = 0; i < 12; i++) for (j = 0; j < 4; j++) scanf("%f", &vendas[i][j]);
    for (i = 0; i < 12; i++) {
        somaMes = 0;
        for (j = 0; j < 4; j++) {
            somaMes += vendas[i][j];
            somaSemana[j] += vendas[i][j];
            somaAno += vendas[i][j];
        }
        printf("%s: %.2f\n", meses[i], somaMes);
    }
    for (j = 0; j < 4; j++) printf("Semana %d: %.2f\n", j+1, somaSemana[j]);
    printf("Total ano: %.2f\n", somaAno);
    return 0;
}
