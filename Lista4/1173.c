#include <stdio.h>
 
int main() {
    int N[10];
    int V = 0;
    scanf("%d", &V);
    for(int i = 0; i < 10; i++){
        N[i] = V;
        V = V * 2;
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}