#include <stdio.h>
#include <string.h>

int main()
{
    int gritos = 0;
    int n = 0;
    while (gritos < 3){
        char string[7];
        scanf("%[^\n]\n", string);
        if(string[0]==42)
            n+=4;
        if(string[1]==42)
            n+=2;
        if(string[2]==42)
            n++;
        if(strcmp(string, "caw caw")==0){
            printf("%d\n",n);
            gritos++;
            n = 0;
        }
    }
    return 0;
}