#include <stdio.h>

int main()
{
    int linha, coluna;
    int xanalgimon, yanalgimon;
    int xjogador, yjogador;
    while(scanf("%d %d", &linha, &coluna)!=EOF){
        int contador = 0;
        int cidade[linha][coluna];
        for(int i = 0; i<linha; i++){
            for(int j = 0; j<coluna; j++){
                scanf("%d", &cidade[i][j]);
                //Verificando as posicoes do jogador e do analgimon
                if(cidade[i][j] == 2){
                    xanalgimon = i;
                    yanalgimon = j;
                } else if(cidade[i][j] == 1){
                    xjogador = i;
                    yjogador = j;
                }
            }
        }
        while(xjogador!=xanalgimon || yjogador!=yanalgimon){
            if(xjogador<xanalgimon){
                xjogador++;
                contador++;
            }
            if(xjogador>xanalgimon){
                xjogador--;
                contador++;
            }
            if(yjogador<yanalgimon){
                yjogador++;
                contador++;
            }
            if(yjogador>yanalgimon){
                yjogador--;
                contador++;
            }
            
        }
        printf("%d\n", contador);
    }
    return 0;
}