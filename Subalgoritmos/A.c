#include <stdio.h>

void coeficienteAngular(float x0, float y0, float x1, float y1){
    float coef = (y1 - y0)/(x1 - x0);
    printf("%.2f", coef);
}

int main (){
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    coeficienteAngular(a, b, c, d);
    return 0;
}