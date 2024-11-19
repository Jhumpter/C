#include <stdio.h>

int main() {
    int alcool = 0, gasolina = 0, diesel = 0, codigo;
    do{
        scanf("%d", &codigo);
        if(codigo == 1) alcool++;
        if(codigo == 2) gasolina++;
        if(codigo == 3) diesel++;
    }while(codigo != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
}