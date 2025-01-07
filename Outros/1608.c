#include <stdio.h>

int main(){
    int teste, dinheiro, ingredientes, bolos, ingredientes_por_bolo;
    //T(teste)
    //D(dinheiro) I(ingredientes) B(tipos de bolos)
    //I numeros (preco de cada ingrediente)
    //B linhas de cada bolo:
        //Qi(quantos ingredientes) Qi pares(indice do ingrediente e quantidade necessaria)
    scanf("%d", &teste);
    for(int i=0; i<teste; i++){
        scanf("%d %d %d", &dinheiro, &ingredientes, &bolos);
        int preco_ingredientes[ingredientes];
        for(int j=0; j<ingredientes; j++){
            scanf("%d", &preco_ingredientes[j]);
        }
        for(int j=0; j<bolos; j++){
            scanf("%d",&ingredientes_por_bolo);
        }
        
        
    }
    
    return 0;
}