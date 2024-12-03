#include <stdio.h>

float coeficienteAngular(float x0, float y0, float x1, float y1){
    float coef = (y1 - y0)/(x1 - x0);
    return coef;
}

int main (){
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    coeficienteAngular(a, b, c, d);
    return 0;
}