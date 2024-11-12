#include <stdio.h>

int main() {
    int P, R;
    scanf("%d %d", &P, &R);
    if(P)
    {
        if(R) printf("A\n");
        else printf("B\n");
    } else printf("C\n");
    return 0;
}