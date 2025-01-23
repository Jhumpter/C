#include <stdio.h>
#include <string.h>

int main()
{
    int testes;
    scanf("%d", &testes);
    for(int i=0;i<testes;i++){
        getchar();
        char mensagem[50] = {0};
        scanf("%[^\n]",mensagem);
        for(int j=0;j<strlen(mensagem);j++){
            if((j==0&&mensagem[j]!=32)||j==0&&strlen(mensagem)==1)
                printf("%c", mensagem[j]);
            else if(mensagem[j]==32&&j<strlen(mensagem)-1){
                if(mensagem[j+1]!=32)
                    printf("%c", mensagem[j+1]);
            }
        }
        printf("\n");
    }
    return 0;
}