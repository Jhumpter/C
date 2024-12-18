#include <stdio.h>

int main()
{
    float matriz[12][12];
    char letra;
    float soma = 0;
    float media;
    int c = 0;
    scanf("%c", &letra);
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%f", &matriz[i][j]);
            if(i<j){
                soma += matriz[i][j];
                c++;
            } 
        }
    }
    if(letra == 'M'){
        media = soma/c;
        printf("%.1f\n", media);
    }
    if(letra == 'S')
        printf("%.1f\n", soma);
    return 0;
}