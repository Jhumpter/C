#include <stdio.h>

int main() {
    double A, B, C, X;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (C > A)
    {
        X = A;
        A = C;
        C = X;
    }
    if (C > B)
    {
        X = B;
        B = C;
        C = X;
    }
    if (B > A)
    {
        X = A;
        A = B;
        B = X;
    }
    if (A+B > C && B+C > A && A+C > B) 
    {
        if (A*A == B*B + C*C) printf("TRIANGULO RETANGULO\n");
        else if (A*A < B*B + C*C) printf("TRIANGULO ACUTANGULO\n");
        else if (A*A > B*B + C*C) printf("TRIANGULO OBTUSANGULO\n");
        if (A == B && B == C) printf("TRIANGULO EQUILATERO\n");
        else if (A == B || B == C || A == C) printf("TRIANGULO ISOSCELES\n");
    } else printf("NAO FORMA TRIANGULO\n");
    
    return 0;
}