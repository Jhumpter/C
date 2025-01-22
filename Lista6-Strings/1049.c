#include <stdio.h>
#include <string.h>

int main()
{
    char cat1[12];
    char cat2[8];
    char cat3[10];
    scanf("%s", cat1);
    scanf("%s", cat2);
    scanf("%s", cat3);
    int vertebrado = strcmp(cat1,"vertebrado");
    int ave = strcmp(cat2,"ave");
    int inseto = strcmp(cat2,"inseto");
    int carnivoro = strcmp(cat3,"carnivoro");
    int onivoro = strcmp(cat3,"onivoro");
    int hematofago = strcmp(cat3,"hematofago");
    if(vertebrado == 0){
        if(ave == 0){
            if(carnivoro == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else{
            if(onivoro == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else{
        if(inseto == 0){
            if(hematofago == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else{
            if(hematofago == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}