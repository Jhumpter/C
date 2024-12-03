#include <stdio.h>
float x, y;

void LePonto(){
    scanf("%f %f", &x, &y);
    float x0 = x;
    float y0 = y;
    scanf("%f %f", &x, &y);
    if(x == x0){
        printf("Nao eh possivel determinar o coeficiente angular\n");
    }else{
        float coef = (y - y0)/(x - x0);
        printf("%.2f", coef);
    }
}

int main(){
    LePonto();
    return 0;
}