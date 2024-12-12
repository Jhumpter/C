#include <stdio.h>

int main() {
    int N = 0, quantia = 0;
    char tipo;
    float total = 0, coelhos = 0, ratos = 0, sapos = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        {
            scanf("%d %c", &quantia, &tipo);
            total += quantia;
            if(tipo == 'C') coelhos += quantia;
            if(tipo == 'R') ratos += quantia;
            if(tipo == 'S') sapos += quantia;
        }
    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", coelhos);
    printf("Total de ratos: %.0f\n", ratos);
    printf("Total de sapos: %.0f\n", sapos);
    printf("Percentual de coelhos: %.2f %\n", 100*coelhos/total);
    printf("Percentual de ratos: %.2f %\n", 100*ratos/total);
    printf("Percentual de sapos: %.2f %\n", 100*sapos/total);
    return 0;
}