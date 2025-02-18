#include <stdio.h>

int main(){
    float matriz[12][12];
    char car;
    float soma = 0;
    int c=0;
    float media;
    scanf("%c", &car);
    for(int i=0; i<12;i++){
        for (int j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int i=0; i<12;i++){
        for (int j = 0; j < 12; j++){
            if(i+j>=12 && j>i){
                soma+=matriz[i][j];
                c++;
            } 
        }
    }
    if(car == 'S'){
        printf("%.1f\n",soma);
    }
    if(car == 'M'){
        media=soma/c;
        printf("%.1f\n",media);
    }
    return 0;
}