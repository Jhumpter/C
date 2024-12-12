#include <stdio.h>

int main(){
    int totalFigurinhas, carimbadas, compradas;
    scanf("%d %d %d", &totalFigurinhas, &carimbadas, &compradas);
    int listaCarimbadas[carimbadas];
    int listaCompradas[compradas];
    int compradasNaoRepetidas[compradas];
    int carimbadasRestantes = carimbadas;
    int c = 0;
    //Lendo as carimbadas e compradas
    for(int i = 0; i<carimbadas; i++){
        scanf("%d", &listaCarimbadas[i]);
    }
    for(int i = 0; i<compradas; i++){
        scanf("%d", &listaCompradas[i]);
    }
    //Substituindo as repetidas por 0
    for(int i = 0; i<compradas; i++){
        int repetidas = 0;
        for(int j = 0; j<compradas; j++){
            if(listaCompradas[i]==listaCompradas[j]){
                repetidas++;
                if(repetidas > 1) listaCompradas[j] = 0;
            }
        }
    }
    //Guardando os valores diferentes de 0 (diferentes) em outra lista
    for(int i = 0; i<compradas; i++){
        if(listaCompradas[i] != 0){
            compradasNaoRepetidas[c] = listaCompradas[i];
            c++;
        }
    }
    //Subtraindo as que ja foram carimbadas do numero total de carimbadas
    for(int i = 0; i<carimbadas; i++){
        for(int j = 0; j<c; j++)
            if(listaCarimbadas[i]==compradasNaoRepetidas[j]) carimbadasRestantes--;
    }
    printf("%d\n", carimbadasRestantes);
    return 0;
}