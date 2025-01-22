#include <stdio.h>
#include <string.h>
 
int main() {
    int testes;
    scanf("%d", &testes);
    for(int i=0;i<testes;i++){
        char string[100];
        scanf("%[^\n]s",string);
        int chave = (strlen(string)/2)-1;
        char string1[50];
        char string2[50];
        strncpy(string1,string,chave+1);
        for(int j=chave+1;j<strlen(string);j++){
            strcat(string2,string[j]);
        }
        for(int j=0;j<chave;j++){
            string[chave-j] = string1[j];
            string[chave+1+j] = string2[strlen(string)-j];
        }
        printf("%s", string);
    }
    return 0;
}