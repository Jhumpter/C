#include <stdio.h>

int main() {
    float n1 = 0, n2 = 0;
    float nota = 0;
    do{
        scanf("%f", &nota);
        if(0>nota || nota>10) printf("nota invalida\n");
        else n1 = nota;
    } while(n1 == 0);
    do{
        scanf("%f", &nota);
        if(0>nota || nota>10) printf("nota invalida\n");
        else n2 = nota;
    } while(n2 == 0);
    nota = (n1 + n2)/2;
    printf("media = %.2f\n", nota);
    return 0;
}