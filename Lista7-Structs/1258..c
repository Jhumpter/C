#include <stdio.h>
#include <string.h>

typedef struct{
    char cor[10];
    char tamanho;
    char nome[30];
} Camisa;

int main()
{
    int testes;
    int primeiro = 1;
    scanf("%d",&testes);
    while(testes!=0){
        if(primeiro==0)
            printf("\n");
        Camisa aluno[testes];
        //Scanear
        for(int i=0;i<testes;i++){
            scanf(" %[^\n]",aluno[i].nome);
            scanf("%s %c",aluno[i].cor,&aluno[i].tamanho);
        }
        //Ordenar
        //nome:
        for(int j = 0; j < testes; j++){
            for(int i = 0; i < testes-1; i++){
                for(int k = 0;k<strlen(aluno[i].nome);k++){
                    if(aluno[i].nome[k] > aluno[i+1].nome[k]){
                        Camisa aux = aluno[i];
                        aluno[i] = aluno[i+1];
                        aluno[i+1] = aux;
                    }
                    if(aluno[i].nome[k] != aluno[i+1].nome[k])
                        break;
                }
            }
        }
        //tamanho:
        for(int j = 0; j < testes-1; j++){
            for(int i = 0; i < testes-1-j; i++){
                if(aluno[i].tamanho < aluno[i+1].tamanho){
                    Camisa aux = aluno[i];
                    aluno[i] = aluno[i+1];
                    aluno[i+1] = aux;
                }
            }
        }
    
        //cor:
        for(int j = 0; j < testes; j++){
            for(int i = 0; i < testes-1; i++){
                if(aluno[i].cor[0] > aluno[i+1].cor[0]){
                    Camisa aux = aluno[i];
                    aluno[i] = aluno[i+1];
                    aluno[i+1] = aux;
                }
            }
        }
        //Printar
        for(int i=0;i<testes;i++){
            printf("%s %c %s\n",aluno[i].cor,aluno[i].tamanho,aluno[i].nome);
        }
        primeiro = 0;
        scanf("%d",&testes);
    }
    return 0;
}