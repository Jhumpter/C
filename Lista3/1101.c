#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    while(M > 0 && N > 0){
        int soma = 0;
        if(N < M){
            int aux = N;
            N = M;
            M = aux;
        }
        while(M < N + 1){
            printf("%d ", M);
            soma += M;
            M++;
        }
        printf("Sum=%d\n", soma);
        scanf("%d %d", &M, &N);
    }
    return 0;
}