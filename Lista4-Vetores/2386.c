#include <stdio.h>
 
int main() {
    int abertura;
    scanf("%d", &abertura);
    int estrelasEstudadas;
    scanf("%d", &estrelasEstudadas);
    int fotonsDaEstrela;
    int estrelasPercebidas = 0;
    for(int i = 0; i<estrelasEstudadas; i++){
        scanf("%d", &fotonsDaEstrela);
        int fotonsPorSegundo = abertura * fotonsDaEstrela;
        if(fotonsPorSegundo >= 40000000)
            estrelasPercebidas++;
    }
    printf("%d\n", estrelasPercebidas);
    return 0;
}