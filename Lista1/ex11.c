#include <stdio.h>

int main()
{
    //1 km a cada 2 min
    int distancia = 0;
    scanf("%d", &distancia);
    int tempo = distancia * 2;
    printf("%d minutos\n", tempo);
    return 0;
}