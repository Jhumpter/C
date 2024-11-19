#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i < 4*n+1; i++){
        if(i % 4 == 0 && i != 0) printf("PUM\n");
        else printf("%d ", i);
    }
}