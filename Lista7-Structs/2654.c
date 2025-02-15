#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[1000];
    int poder;
    int kills;
    int mortes;
} Candidato;

int main()
{
    int seres;
    scanf("%d",&seres);
    Candidato ser[seres];
    for(int i=0;i<seres;i++){
        //scaneando
        for(int j=0;j<seres;j++){
            scanf("%s %d %d %d",ser[j].nome,&ser[j].poder,&ser[j].kills,&ser[j].mortes);
        }
        //ordenando por nome
        for(int j = 0; j < seres-1; j++){
            for(int k = 0; k < seres-j-1; k++){
                for(int l = 0;l<strlen(ser[i].nome);l++){
                    if(ser[k].nome[l] > ser[k+1].nome[l]){
                        Candidato aux = ser[k];
                        ser[k] = ser[k+1];
                        ser[k+1] = aux;
                    }
                    if(ser[k].nome[k] != ser[k+1].nome[k])
                        break;
                }
            }
        }
        //ordenando por mortes
        for(int j = 0; j < seres-1; j++){
            for(int k = 0; k < seres-j-1; k++){
                if(ser[k].mortes > ser[k+1].mortes){
                    Candidato aux = ser[k];
                    ser[k] = ser[k+1];
                    ser[k+1] = aux;
                }
            }
        }
        //ordenando por kills
        for(int j = 0; j < seres; j++){
            for(int k = 0; k < seres-1; k++){
                if(ser[k].kills < ser[k+1].kills){
                    Candidato aux = ser[k];
                    ser[k] = ser[k+1];
                    ser[k+1] = aux;
                }
            }
        }
        //ordenando por poder
        for(int j = 0; j < seres; j++){
            for(int k = 0; k < seres-1; k++){
                if(ser[k].poder < ser[k+1].poder){
                    Candidato aux = ser[k];
                    ser[k] = ser[k+1];
                    ser[k+1] = aux;
                }
            }
        }
    }
    printf("%s\n",ser[0].nome);
    return 0;
}