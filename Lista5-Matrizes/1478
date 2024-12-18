#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(;;){
        int n = -1;
        scanf("%d", &n);
        if(n==0) break;
        int matriz[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matriz[i][j] = abs(i-j)+1;
                if(j==0){
                    printf("%3d", matriz[i][j]);
                    if(n == 1) printf("\n");

                }
                else {
                    if(j==n-1){
                    printf("%4d\n", matriz[i][j]);
                    }
                    else printf("%4d", matriz[i][j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}