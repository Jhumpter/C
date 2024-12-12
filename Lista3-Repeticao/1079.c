#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        {
            float a = 0, b = 0, c = 0;
            float media = 0;
            scanf("%f %f %f", &a, &b, &c);
            media = (a*2+b*3+c*5)/10;
            printf("%.1f\n", media);
        }
    return 0;
}