#include <stdio.h>

int main() {
    int inicio, fim, total;
    scanf("%d %d", &inicio, &fim);
    if (inicio == fim) total = 24;
    else if (inicio > fim) total = 24 - inicio + fim;
    else total = fim - inicio;
    printf("O JOGO DUROU %d HORA(S)\n", total);
    return 0;
}