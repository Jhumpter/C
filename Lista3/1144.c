#include <stdio.h>

int main() {
    int n1 = 1;
    int valor;
    scanf("%d", &valor);
    for(int i = 0; i < valor; i++){
        int n2 = n1 * n1;
        int n3 = n2 * n1;
        printf("%d %d %d\n", n1, n2, n3);
        printf("%d %d %d\n", n1, n2+1, n3+1);
        n1++;
    }
}