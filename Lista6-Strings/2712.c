#include <stdio.h>
#include <string.h>

int main()
{
    int testes;
    scanf("%d",&testes);
    for(int i=0;i<testes;i++){
        int falha = 0;
        char placa[100];
        scanf("%s",placa);
        if(strlen(placa)!=8)
            falha = 1;
        for(int j=0;j<3;j++){
            if(placa[j]<65||placa[j]>90)
                falha = 1;
        }
        for(int j=4;j<8;j++){
            if(placa[j]<48||placa[j]>57)
                falha = 1;
        }
        if(placa[3]!=45)
            falha = 1;
        if(falha)
            printf("FAILURE\n");
        else{
            if(placa[7]==49||placa[7]==50)
                printf("MONDAY\n");
            if(placa[7]==51||placa[7]==52)
                printf("TUESDAY\n");
            if(placa[7]==53||placa[7]==54)
                printf("WEDNESDAY\n");
            if(placa[7]==55||placa[7]==56)
                printf("THURSDAY\n");
            if(placa[7]==57||placa[7]==48)
                printf("FRIDAY\n");
        }
    }
    return 0;
}