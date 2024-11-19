#include <stdio.h>

int main() {
    int x = 0, y = 0, soma = 0;
    int aux;
    scanf("%d %d", &x, &y);
    if(x>y){
        aux = x;
        x = y;
        y = aux;
    }
    for(x; x<=y; x++){
        if(x % 13 != 0) soma += x;
    }
    printf("%d\n", soma);
    return 0;
}