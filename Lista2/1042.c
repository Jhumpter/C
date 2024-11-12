#include <stdio.h>

int main() {
    int a, b, c, x;
    scanf("%d %d %d", &a, &b, &c);
    int A = a;
    int B = b;
    int C = c;
    if (c < a)
    {
        x = a;
        a = c;
        c = x;
    }
    if (c < b)
    {
        x = b;
        b = c;
        c = x;
    }
    if (b < a)
    {
        x = a;
        a = b;
        b = x;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n%d\n%d\n%d\n", A, B, C);
    return 0;
}