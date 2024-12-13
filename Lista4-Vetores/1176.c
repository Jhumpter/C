#include <stdio.h>
 
int main() {
    int T = 0;
    double Fib[61];
    Fib[0] = 0;
    Fib[1] = 1;
    for (int i = 2; i < 61; i++) {
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    }
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int n = 0;
        scanf("%d", &n);
        printf("Fib(%d) = %.0lf\n", n, Fib[n]);
    }
    return 0;
}