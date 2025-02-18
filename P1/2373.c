#include <stdio.h>
 
int main() {
    int N;
    int coposquebrados = 0;
    scanf("%d", &N);
    for(int i = 0 ; i<N ; i++){
        int L, C;
        scanf("%d %d", &L, &C);
        if(L > C) coposquebrados += C;
    }
    printf("%d\n", coposquebrados);
    return 0;
}