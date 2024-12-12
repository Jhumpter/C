#include <stdio.h>
 
int main() {
    int X[10];
    for(int i = 0; i < 10; i++){
        int n;
        scanf("%d", &n);
        X[i] = n;
        if(X[i] <= 0){
            X[i] = 1;
        }
        printf("X[%d] = %d\n", i, X[i]);
    }
    return 0;
}