#include <stdio.h>
#include <string.h>

int main()
{
    int n=1;
    scanf("%d", &n);
    do{
        int maior = 0;
        char palavra[n][50];
        for(int i=0;i<n;i++){
            scanf("%s", palavra[i]);
            if(strlen(palavra[i])>maior)
                maior = strlen(palavra[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=strlen(palavra[i]);j<maior;j++){
                printf(" ");
            }
            printf("%s\n", palavra[i]);
        }
        scanf("%d", &n);
        if(n!=0)
            printf("\n");
    }while(n!=0);
    return 0;
}