#include <stdio.h>

void Leitura(int* codigo, float* nota1, float* nota2, float* nota3){
    scanf("%d %f %f %f", codigo, nota1, nota2, nota3);
}

float Media(float n1, float n2, float n3){
    float media = (n1*3 + n2*3 + n3*4)/10;
    return media;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int codigo;
        float nota1, nota2, nota3;
        Leitura(&codigo, &nota1, &nota2, &nota3);
        float media = Media(nota1, nota2, nota3);
        printf("Aluno %d, Media: %.1f\n", codigo, media);
    }
    return 0;
}