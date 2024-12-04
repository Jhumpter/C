#include <stdio.h>

void menorMaior(int* a, int* b, int* c){
    int x;
    if (*c < *a){
        x = *a;
        *a = *c;
        *c = x;
    }
    if (*c < *b){
        x = *b;
        *b = *c;
        *c = x;
    }
    if (*b < *a){
        x = *a;
        *a = *b;
        *b = x;
    }
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    menorMaior(&a, &b, &c);
    int menor = a;
    int maior = c;
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}