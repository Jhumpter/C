#include <stdio.h>

int main()
{
    double matriz[12][12];
    char letra;
    double soma = 0;
    double media;
    int c = 0;
    scanf("%c", &letra);
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &matriz[i][j]);
            if(i<j && i+j<11){
                soma += matriz[i][j];
                c++;
            } 
        }
    }
    if(letra == 'M'){
        media = soma/c;
        printf("%.1lf\n", media);
    }
    if(letra == 'S')
        printf("%.1lf\n", soma);
    return 0;
}