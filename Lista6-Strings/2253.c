#include <stdio.h>
#include <string.h>

int main()
{
    char senha[100];
    //Em [0] verifica se ha maiuscula, em [1] minuscula e em [2] numero
    //Em [3] verifica se ha algo alem de letras e numeros
    //[4] verifica o tamanho
    while(scanf("%[^\n]", senha)!=EOF){
        getchar();
        int requisitos[5] = {0};
        for(int i=0;i<strlen(senha);i++){
        if(senha[i]>47&&senha[i]<58)//numero
            requisitos[2]=1;
        else if(senha[i]>64&&senha[i]<91)//maiuscula
            requisitos[0]=1;    
        else if(senha[i]>96&&senha[i]<123)//minuscula
            requisitos[1]=1;
        else//caractere especial
            requisitos[3]=1;
        if(strlen(senha)>32||strlen(senha)<6)//tamanho errado
            requisitos[4]=1;
        }
        int criterios = requisitos[0] && requisitos[1] && requisitos[2];
        int proibicoes = requisitos[3]+requisitos[4];
        if(criterios&&proibicoes==0)
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    }
    return 0;
}