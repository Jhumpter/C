#include <stdio.h>

int main(){
    int n = 0;
    printf("Digite o numero de testes: ");
    scanf("%d", &n);
    FILE* fd;
    fd = fopen("Questao1.txt", "w");
    for(int i=0;i<n;i++){
        char aluno[50];
        printf("Escreva o nome do aluno: ");
        scanf("%s",aluno);
        fprintf(fd,"%s",aluno);
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
