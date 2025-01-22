#include <stdio.h>
#include <string.h>

int main() {
    int testes;
    scanf("%d", &testes);
    getchar(); // Consome o '\n' após o número de testes
    
    for (int i = 0; i < testes; i++) {
        char string[200];
        fgets(string, sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0'; // Remove o '\n' do final da string, se existir
        
        int comprimento = strlen(string);
        int chave = comprimento / 2;

        char string1[100] = {0}; // Inicializa com zeros
        char string2[100] = {0}; // Inicializa com zeros

        // Processa a primeira metade invertida
        for (int j = 0; j < chave; j++) {
            string1[j] = string[chave - j - 1];
        }

        // Processa a segunda metade invertida
        for (int j = comprimento - 1, c = 0; j >= chave; j--, c++) {
            string2[c] = string[j];
        }

        // Imprime as metades invertidas
        printf("%s", string1);
        printf("%s\n", string2);
    }

    return 0;
}