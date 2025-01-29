#include <stdio.h>
#include <string.h>

int main()
{   
    int testes;
    scanf("%d",&testes);
    for(int i=0;i<testes;i++){
        int alfabeto[26] = {0};
        char frase[201];
        getchar();
        scanf("%[^\n]",frase);
        for(int j=0;j<strlen(frase);j++){
            //Maiusculas
            if(frase[j]>64&&frase[j]<91){
                alfabeto[frase[j]-65]++;
            }
            //Minusculas
            if(frase[j]>96&&frase[j]<123){
                alfabeto[frase[j]-97]++;
            }
        }
        //Vendo quantidade da letra q mais tem
        int maior_repeticao = 0;
        for(int j=0;j<26;j++){
            if(alfabeto[j]>maior_repeticao)
                maior_repeticao = alfabeto[j];
        }
        //Printando quais letras tem essa quantidade
        for(int j=0;j<26;j++){
            if(alfabeto[j]==maior_repeticao)
                printf("%c",j+97);
        }
        printf("\n");
    }
    return 0;
}