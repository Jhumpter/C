#include <stdio.h>

int main() {
    int n;
    do{
        int qtdeDeRespostas;
        int indice;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            int alternativas[5];
            qtdeDeRespostas = 0;
            for(int j = 0; j < 5; j++){
                int media;
                scanf("%d", &media);
                alternativas[j] = media;
                if(media < 128){
                    qtdeDeRespostas++;
                    indice = j;
                }
            }
            if(qtdeDeRespostas == 1) {
                char resposta;
                if (indice == 0) resposta = 'A';
                else if (indice == 1) resposta = 'B';
                else if (indice == 2) resposta = 'C';
                else if (indice == 3) resposta = 'D';
                else if (indice == 4) resposta = 'E';
                printf("%c\n", resposta);
            }
            else printf("*\n");
        }
    }while(n != 0);
}