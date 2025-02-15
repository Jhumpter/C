#include <stdio.h>
#include <string.h>

typedef struct {
    int tamanho;
    char palavra[51];
} Palavra;

int main() {
    int n = 0;
    scanf("%d", &n);
    while (getchar() != '\n');

    for (int c = 0; c < n; c++) {
        char string[2600];
        scanf("%[^\n]", string);
        while (getchar() != '\n');

        int n_letra = 0;
        int n_palavras = 0;
        char palavra[51] = {0};
        Palavra palavras[1001];

        for (int i = 0; i < strlen(string); i++) {
            if (string[i] == ' ') {
                if (n_letra > 0) {
                    palavra[n_letra] = '\0';
                    strcpy(palavras[n_palavras].palavra, palavra);
                    palavras[n_palavras].tamanho = n_letra;
                    n_palavras++;
                    n_letra = 0;
                    for (int j = 0; j < 51; j++)
                        palavra[j] = 0;
                }
            } else {
                if (n_letra < 50) {
                    palavra[n_letra] = string[i];
                    n_letra++;
                }
            }
        }

        if (n_letra > 0) {
            palavra[n_letra] = '\0';
            strcpy(palavras[n_palavras].palavra, palavra);
            palavras[n_palavras].tamanho = n_letra;
            n_palavras++;
        }

        for (int j = 0; j < n_palavras - 1; j++) {
            for (int i = 0; i < n_palavras - 1 - j; i++) {
                if (palavras[i].tamanho < palavras[i + 1].tamanho) {
                    Palavra aux = palavras[i];
                    palavras[i] = palavras[i + 1];
                    palavras[i + 1] = aux;
                }
            }
        }

        for (int i = 0; i < n_palavras; i++) {
            printf("%s", palavras[i].palavra);
            if (i != n_palavras - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}