#include <stdio.h>

int main()
{
    int N = 0;
    int i, j;
    scanf("%d", &N);
    int matriz[5][2];
    for(int c = 0; c<N; c++){
        for(i = 0; i<5; i++){
            for(j = 0; j<2; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        int bool = 0;
        if(matriz[0][0]<=matriz[4][0]&&matriz[3][0]<=matriz[4][0]&&matriz[4][0]<=matriz[1][0]&&matriz[4][0]<=matriz[2][0]&&
        matriz[0][1]<=matriz[4][1]&&matriz[1][1]<=matriz[4][1]&&matriz[4][1]<=matriz[2][1]&&matriz[4][1]<=matriz[3][1])
            bool = 1;
        printf("%d\n", bool);
    }
    return 0;
}