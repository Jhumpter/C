#include <stdio.h>

int main() {
    int bilhetes, pessoas;
    int bilhetesRepetidos = 0;
    //Criando loop infinito
    for(;;){
        scanf("%d %d", &bilhetes, &pessoas);
        int numeroBilhetes[pessoas];
        //Lendo os numeros dos bilhetes
        for(int i = 0; i<pessoas; i++){
            scanf("%d", &numeroBilhetes[i]);
        }
        //Contando os bilhetes repetidos
        for(int i = 0; i<pessoas; i++){
            for(int j = 0; j<pessoas; j++){
                if(numeroBilhetes[i]==numeroBilhetes[j] && i!=j && numeroBilhetes[i]!=0){
                    int numeroIgual = numeroBilhetes[i];
                    for(int k = 0; k<pessoas; k++){
                        if(numeroIgual == numeroBilhetes[k]) numeroBilhetes[k] = 0;
                    }
                    bilhetesRepetidos++;
                    numeroBilhetes[i] = 0;
                    numeroBilhetes[j] = 0;
                }
            }
        }
        
        if(bilhetes==0) {
            break;
        } else {
            printf("%d\n", bilhetesRepetidos);
            bilhetesRepetidos = 0;
        }
        
    }
    return 0;
}