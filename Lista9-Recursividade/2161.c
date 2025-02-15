#include <stdio.h>

double raiz(int n) {
    if (n == 0)
        return 0;
    return 1.0 / (6 + raiz(n - 1));
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.10lf\n", 3 + raiz(n));
    return 0;
}