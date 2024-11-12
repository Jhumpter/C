#include <stdio.h>

int main()
{
    int tempo, velocidade = 0;
    float consumo = 12.0;
    scanf("%d %d", &tempo, &velocidade);
    double combustivel = velocidade * tempo / consumo;
    printf("%.3lf\n", combustivel);
    return 0;
}