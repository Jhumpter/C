#include <stdio.h>

int main()
{
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int mapa[linhas][colunas];
    int c = 0;
    //Lendo valores do mapa
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++)
            scanf("%d", &mapa[i][j]);
    }
    //Para verificar os arredores precisa de somar e subtrair 1 de linhas e colunas, simultaneamente e separadamente
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            //Eh necessario avaliar se o ponto nao esta na borda
            if(i!=0 && j!=0 && i!=linhas-1 && j!=colunas-1){
                if(mapa[i][j]==42){
                    //Pra n ficar um if enorme, vou dividir em varios, comecando pela linha
                    if(mapa[i+1][j]==7 && mapa[i-1][j]==7){
                        //Agora as colunas
                        if(mapa[i][j+1]==7 && mapa[i][j-1]==7){
                            //Agora as diagonais superiores
                            if(mapa[i-1][j-1]==7 && mapa[i-1][j+1]==7){
                                //Por fim inferiores
                                if(mapa[i+1][j-1]==7 && mapa[i+1][j+1]==7){
                                    printf("%d %d\n", i+1, j+1);
                                    c++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(c==0)
        printf("0 0\n");
    return 0;
}