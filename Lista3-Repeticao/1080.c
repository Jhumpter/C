#include <stdio.h>

int main() {
    int x = 0;
    int pos = 1;
    for (int i = 1; i < 101; i++)
        {
            int n;
            scanf("%d", &n);
            if (n > x)
            {
                x = n;
                pos = i;
            }
        }
    printf("%d\n%d\n", x, pos);
    return 0;
}