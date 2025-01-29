#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[21];
    int validade;
} Carne;

int main()
{   
    int qtde;
    while(scanf("%d",&qtde)!=EOF){
        Carne carne[qtde];
        for(int j=0;j<qtde;j++){
            scanf("%s %d",carne[j].nome,&carne[j].validade);
        }
        //ordenando por validade
        for(int j = 0; j < qtde-1; j++){
            for(int k = 0; k < qtde-1-j; k++){
                if(carne[k].validade > carne[k+1].validade){
                    Carne aux = carne[k];
                    carne[k] = carne[k+1];
                    carne[k+1] = aux;
                }
            }
        }
        for(int j=0;j<qtde;j++){
            printf("%s",carne[j].nome);
            if(j!=qtde-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}