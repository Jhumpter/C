#include <stdio.h>

int main(){
    int teste, dinheiro, ingredientes, bolos, qtde_ingredientes, qtde_bolos;
    //Scanear T
    scanf("%d", &teste);
    //Repetir programa T vezes
    for(int i=0; i<teste; i++){
        //Scaneanfo D,I e B
        scanf("%d %d %d", &dinheiro, &ingredientes, &bolos);
        //O ingrediente do indice i tem valor preco_ingredientes[i]
        int preco_ingredientes[ingredientes];
        for(int j=0; j<ingredientes; j++){
            scanf("%d", &preco_ingredientes[j]);
        }
        //Para cada ingrediente, scanear o indice e a qtde necessaria
        int qtde_max_bolos = 0;
        for(int j=0; j<bolos; j++){
            scanf("%d", &qtde_ingredientes);
            int receita[2][qtde_ingredientes];
            //receita[0] guarda o indice do ingrediente
            //receita[1] guarda quantos sao necessarios
            for(int k=0; k<qtde_ingredientes; k++){
                scanf("%d", &receita[0][k]);
                scanf("%d", &receita[1][k]);
                qtde_bolos = dinheiro/(receita[1][k]*preco_ingredientes[receita[0][k]]);
                if(qtde_bolos>qtde_max_bolos)
                    qtde_max_bolos = qtde_bolos;
            }
            /*Precisa avaliar se esse maximo pode ser usado 
            para todos os ingredientes e se o dinheiro da*/
            for(int k = qtde_max_bolos; k!=0; k--){
                for(int j=0; j<qtde_ingredientes; j++){
                    if(dinheiro<preco_ingredientes[receita[0][j]]*receita[1][j])
                        break;
                }
            }
        }
        printf("%d\n", qtde_max_bolos);
    }
    return 0;
}