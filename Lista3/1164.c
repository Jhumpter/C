#include <stdio.h>

int main() {
    int x = 0, n = 0;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        scanf("%d", &n);
        int soma = 0;
        for(int c = 1; c < n+1; c++){
            if(n % c == 0) soma += c;
        }
        if(soma/2 == n) printf("%d eh perfeito\n", n);
        else printf("%d nao eh perfeito\n", n);
    }
}