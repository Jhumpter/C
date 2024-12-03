#include <stdio.h>
#include <tgmath.h>

void potencia(int base, int expoente){
    if(expoente < 0){
        printf("Ainda nao lidamos com expoentes negativos");
    } else {
        int res = pow(base, expoente);
        printf("%d", res);
    }
    
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    potencia(x, y);
    return 0;
}