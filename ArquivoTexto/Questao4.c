#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    printf("Digite o nome do arquivo a ser aberto: ");
    scanf("%s", nome);
    strcat(nome,".txt");
    FILE* fd;
    fd = fopen(nome, "a");
    if(fd == NULL){
        printf("O arquivo digitado nao existe!\n");
        return 0;
    }
    printf("Digite o numero de testes: ");
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char aluno[30];
        printf("Digite o nome do aluno: ");
        getchar();
        scanf("%[^\n]", aluno);
        fprintf(fd,"%s",aluno);
        int codigo;
        printf("Digite o codigo do aluno: ");
        scanf("%d",&codigo);
        fprintf(fd,"(%d):",codigo);
        float notas[3];
        for(int j=0;j<3;j++){
            printf("Digite a nota %d de %s: ",j+1,aluno);
            scanf("%f",&notas[j]);
            fprintf(fd," %.1f",notas[j]);
        }
        fprintf(fd,"\n");
    }
    return 0;
}
