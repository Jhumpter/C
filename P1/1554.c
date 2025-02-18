#include <stdio.h>
 
int main() {
    int C;
    scanf("%d", &C);
    for(int i = 0; i < C; i++){
        int N, x0, y0;
        scanf("%d", &N);
        scanf("%d %d", &x0, &y0);
        int dist0, prox;
        for (int i = 1; i < N+1; i++){
            int x, y;
            scanf("%d %d", &x, &y);
            int distx = (x-x0)*(x-x0);
            int disty = (y-y0)*(y-y0);
            int dist = distx + disty;
            if(i == 1 || dist < dist0){
                dist0 = dist;
                prox = i;
            }
        }
        printf("%d\n", prox);
    }
    return 0;
}