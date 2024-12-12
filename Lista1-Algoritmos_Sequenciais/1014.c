#include <stdio.h>

int main()
{
    int X = 0; //Distancia total
    float Y = 0; //Total de combustivel gasto
    scanf("%d %f", &X, &Y);
    double consumo = X / Y;
    printf("%.3lf km/l", consumo);
    return 0;
}