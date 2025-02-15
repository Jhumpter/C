#include <stdio.h>

int soma(int numero) {
    if(numero == 0)
        return 1;
    return 2*soma(numero-1);
}

int main() {
    int n;
    scanf("%d", &n);
    for(int c = 0;c<n;c++){
        int numero = 0;
        scanf("%d",&numero);
        printf("%d\n",soma(numero)-1);
    }
    return 0;
}