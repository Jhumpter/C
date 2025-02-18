#include <stdio.h>
 
int main() {
    int tamanho;
    while(scanf("%d",&tamanho)!= EOF){
        int matriz[tamanho][tamanho];
        //Preenchendo tudo com 0
        for(int i=0;i<tamanho;i++){
            for(int j=0;j<tamanho;j++){
                matriz[i][j] = 0;
            }
        }
        //Preenchendo diagonais
        for(int i=0;i<tamanho;i++){
            for(int j=0;j<tamanho;j++){
                if(i==j) matriz[i][j]=2;
                if(i+j==tamanho-1) matriz[i][j]=3;
            }
        }
        //Preenchendo interior
        for(int i=0;i<tamanho;i++){
            for(int j=0;j<tamanho;j++){
                if(i>=tamanho/3 && j>=tamanho/3)
                    if(i<=tamanho-((tamanho/3)+1) && j<=tamanho-((tamanho/3)+1))
                        matriz[i][j] = 1;
            }
        }
        //Preenchendo ponto central
        for(int i=0;i<tamanho;i++){
            for(int j=0;j<tamanho;j++){
                if(i==tamanho/2 && j==tamanho/2) matriz[i][j]=4;
            }
        }
        //printando
        for(int i=0;i<tamanho;i++){
            for(int j=0;j<tamanho;j++){
                printf("%d", matriz[i][j]);
                if(j==tamanho-1) printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}