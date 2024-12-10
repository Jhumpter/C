#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int numeros[n];
        int diferentes[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for(int j = 0; j < n; j++){
            int numero;
            scanf("%d", &numero);
            numeros[j] = numero;
        }
        for(int j = 0; j < n; j++){
            int contador = 0;
            for(int k = 0; k < n; k++){
                if(numeros[j] == numeros[k]) contador++;
                if(contador == 1) diferentes[j] = numeros[j];
            }
            for(int k = 0; k < n; k++){
            if (diferentes[k] != 0) printf("%d aparece %d vez(es)\n", diferentes[k], contador);
            }
        }
    }
    return 0;
}