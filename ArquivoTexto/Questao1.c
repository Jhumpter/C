#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);
    int n = 0;
    printf("Digite o numero de testes: ");
    scanf("%d", &n);
    FILE* fd;
    strcat(nome,".txt");
    fd = fopen(nome, "w");
    for(int i=0;i<n;i++){
        float notas[3];
        for(int j=0;j<3;j++){
            printf("Digite a nota %d: ",j+1);
            scanf("%f",&notas[j]);
            fprintf(fd," %.1f",notas[j]);
        }
        fprintf(fd,"\n");
    }
    return 0;
}
