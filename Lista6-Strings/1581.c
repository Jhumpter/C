#include <stdio.h>
#include <string.h>

int main()
{
    int testes;
    scanf("%d", &testes);
    for(int i=0;i<testes;i++){
        int pessoas;
        int diferente = 0;
        char primeiro_idioma[20];
        char idioma[20];
        scanf("%d", &pessoas);
        for(int j=0;j<pessoas;j++){
            scanf("%s", idioma);
            if(j==0)
                strcpy(primeiro_idioma, idioma);
            if(strcmp(idioma, primeiro_idioma)!=0)
                diferente = 1;
        }
        if(diferente==1)
            printf("ingles\n");
        else
            printf("%s\n",idioma);
    }
    return 0;
}