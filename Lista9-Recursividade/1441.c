#include <stdio.h>

int granizo(int* n, int* maior) {
    if (*n > *maior)
        *maior = *n;
    if (*n == 1)
        return 1;
    if (*n % 2 == 0) {
        *n = *n / 2;
    } else {
        *n = 3 * (*n) + 1;
    }
    return granizo(n, maior);
}

int main() {
    int n;
    int maior = 0;
    scanf("%d", &n);
    while (n != 0) {
        maior = 0;
        granizo(&n, &maior);
        printf("%d\n", maior);
        scanf("%d", &n);
    }
    return 0;
}