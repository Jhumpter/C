#include <stdio.h>

int main()
{
    float valor;
    int qtde, codigo;
    scanf("%d %d", &codigo, &qtde);
    switch (codigo)
    {
        case 1:
            valor = 4;
            break;
        case 2:
            valor = 4.5;
            break;
        case 3:
            valor = 5;
            break;
        case 4:
            valor = 2;
            break;
        case 5:
            valor = 1.5;
            break;
    }
    valor = valor * qtde;
    printf("Total: R$ %.2f\n", valor);
    return 0;
}