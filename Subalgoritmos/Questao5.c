#include <stdio.h>

void troca(int* a, int* b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    printf("X = %d Y = %d\n", *a, *b);
}

int main(){
    for(int i = 0; i < 5; i++){
        int X, Y;
        scanf("%d %d", &X, &Y);
        troca(&X, &Y);
    }
    return 0;
}