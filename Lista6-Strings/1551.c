#include <stdio.h>
#include <string.h>

int main()
{
    int testes;
    scanf("%d",&testes);
    for(int i=0;i<testes;i++){
        int soma = 0;
        getchar();
        char frase[1000];
        int alfabeto[26] = {0};
        scanf("%[^\n]",frase);
        for(int j=0;j<strlen(frase);j++){
            for(int k=97;k<123;k++){
                if(frase[j]==k)
                    alfabeto[k-97] = 1;
            }
        }
        for(int j=0;j<26;j++){
            soma += alfabeto[j];
        }
        if(soma>=26)
            printf("frase completa\n");
        else if(soma>=13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }
    return 0;
}