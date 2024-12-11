#include <stdio.h>
 
int main() {
    int T = 0;
    int j, c = 0;
    scanf("%d", &T);
    int N[1000];
    for (int i = 0; i < 1000 ; i = i+T){
        c = i;
        for(j = 0; j < T; j++){
            N[j] = j;
            printf("N[%d] = %d\n", c, N[j]);
            if(c == 999) break;
            c++;
        }
    }
    return 0;
}