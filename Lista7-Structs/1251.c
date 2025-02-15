#include <stdio.h>
#include <string.h>

typedef struct{
    int ascii_struct;
    int frequencia_struct;
} Caracter;

int main(){
    char string[1001];
    int c = 0;
    while(scanf("%[^\n]", string)!=EOF){
        if(c!=0)
            printf("\n");
        //A array ascii vai guardar no respectivo indice a frequencia
        int ascii[100] = {0};
        //Percorrer a string para pegar a frequencia do ascii
        for(int i=0;i<strlen(string);i++){
            //Soma 1 para cada elemento da string no indice caracter-32
            ascii[string[i]-32]++;
        }
        Caracter caracter[1001];
        int indice_de_caracter = 0;
        //Guardar a frequencia e o ascii de cada caracter na struct
        for(int i=0;i<100;i++){
            if(ascii[i] != 0){
                caracter[indice_de_caracter].frequencia_struct = ascii[i];
                caracter[indice_de_caracter].ascii_struct = i+32;
                indice_de_caracter++;
            }
        }
        //Ordenar a struct com o inverso do ascii
        int ok = 0;
        int caracteres_diferentes = indice_de_caracter;
        for(int i=0;i<caracteres_diferentes&&ok==0;i++){
            ok = 1;
            for(int j=0;j<caracteres_diferentes-1-i;j++){
                if(caracter[j].ascii_struct<caracter[j+1].ascii_struct){
                    Caracter aux = caracter[j];
                    caracter[j] = caracter[j+1];
                    caracter[j+1] = aux;
                    ok = 0;
                }
            }
        }
        //Ordenar a struct com base na frequencia
        ok = 0;
        for(int i=0;i<caracteres_diferentes&&ok==0;i++){
            ok = 1;
            for(int j=0;j<caracteres_diferentes-1-i;j++){
                if(caracter[j].frequencia_struct>caracter[j+1].frequencia_struct){
                    Caracter aux = caracter[j];
                    caracter[j] = caracter[j+1];
                    caracter[j+1] = aux;
                    ok = 0;
                }
            }
        }
        //Printar o ascii e a frequencia de cada Caracter em caracter
        for(int i=0;i<caracteres_diferentes;i++){
            printf("%d %d\n",caracter[i].ascii_struct,caracter[i].frequencia_struct);
        }
        getchar();
        c++;
    }
    return 0;
}