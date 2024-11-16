#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d %d", &X, &Y);
        if (X > Y){
            int A = X;
            X = Y;
            Y = A;
        }
        X++;
        int soma = 0;
        while(X<Y){
            if(X % 2 != 0) soma += X;
            X++;
        }
        printf("%d\n", soma);
    }
    return 0;
}