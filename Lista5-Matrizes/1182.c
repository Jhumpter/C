#include <stdio.h>

int main()
{
    float matriz[12][12];
    int coluna;
    char letra;
    float soma = 0;
    float media;
    scanf("%d", &coluna);
    scanf("\n%c", &letra);
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int i = 0; i<12; i++){
        float valor = matriz[i][coluna];
        soma += valor;
    }
    if(letra == 'M'){
        media = soma/12;
        printf("%.1f\n", media);
    }
    if(letra == 'S')
        printf("%.1f\n", soma);
    return 0;
}