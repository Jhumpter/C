#include <stdio.h>

double raiz(int n) {
    if (n == 0)
        return 0;
    return 1.0 / (2 + raiz(n - 1));
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.10lf\n", 1 + raiz(n));
    return 0;
}