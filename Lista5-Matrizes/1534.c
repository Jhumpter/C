#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n) != EOF){
        int matriz[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i == j)
                    matriz[i][j] = 1;
                else
                    matriz[i][j] = 3;
                if(i+j == n-1)
                    matriz[i][j] = 2;
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                printf("%d", matriz[i][j]);
                if(j == n-1)
                    printf("\n");
            }
        }
    }
    return 0;
}