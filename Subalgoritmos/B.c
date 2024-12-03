#include <stdio.h>

float pesoIdeal(float altura, char sexo){
    float peso;
    if(sexo == 'F'){
        peso = 20 * altura * altura;
    }else if(sexo == 'M'){
        peso = 23 * altura * altura;
    }
    return peso;
}

int main(){
    int n;
    float altura;
    char sexo;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f %c", &altura, &sexo);
        printf("Peso ideal: %f\n", pesoIdeal(altura, sexo));
    }
    return 0;
}