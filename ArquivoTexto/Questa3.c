#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    printf("Digite o nome do arquivo a ser aberto: ");
    scanf("%s", nome);
    strcat(nome,".txt");
    FILE* fd_entrada;
    fd_entrada = fopen(nome, "r+");
    if(fd_entrada == NULL){
        printf("O arquivo digitado nao existe!\n");
        return 0;
    }
    FILE* fd_saida;
    char nome2[20];
    printf("Digite o nome do arquivo a ser criado: ");
    scanf("%s",nome2);
    strcat(nome2,".txt");
    fd_saida = fopen(nome2, "w");
    if(fd_saida == NULL){
        printf("Nao foi possivel abrir o arquivo!\n");
        return 0;
    }
    char nome_aluno[30] = {0};
    int codigo;
    float n1,n2,n3;
    float media;
    while(fscanf(fd_entrada,"%[^(](%d): %f %f %f\n",nome_aluno,&codigo,&n1,&n2,&n3)!=EOF){
        media = (n1+n2+n3)/3;
        fprintf(fd_saida,"%d: %.1f\n",codigo,media);
    }
    fclose(fd_entrada);
    fclose(fd_saida);
    return 0;
}
