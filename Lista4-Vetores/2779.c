#include <stdio.h>

int main() {
    int total = 0;
    scanf("%d", &total);
    int tem = 0;
    scanf("%d", &tem);
    int figurinhas[tem];
    for(int i = 0; i < tem; i++){
        int numero;
        scanf("%d", &numero);
        figurinhas[i] = numero;
    }
    for(int i = 0; i < tem; i++){
        int repete = -1;
        for(int j = 0; j < tem; j++){
            if(figurinhas[i] == figurinhas [j] && figurinhas[i] != 0){
                repete++;
                if(repete > 0){
                figurinhas[j] = 0;
            }
            }
        } 
    }
    for(int i = 0; i < tem; i++){
        if(figurinhas[i]!=0) total--;
    }
    printf("%d\n", total);
    return 0;
}