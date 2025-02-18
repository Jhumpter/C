#include <stdio.h>
#include <string.h>

int main(){
    char letra;
    char texto[1001];
    int palavras = 0;
    scanf("%c",&letra);
    float palavras_letra = 0;
    while(scanf("%s",texto)!=EOF){
        int contem_letra = 0;
        palavras++;
        for(int i=0;i<strlen(texto);i++){
            if(texto[i]==letra){
                contem_letra = 1;
                break;
            }
        }
        if(contem_letra ==1)
            palavras_letra++;
    }
    float porcentagem = palavras_letra/palavras*100;
    printf("%.1f\n",porcentagem);
    return 0;
}