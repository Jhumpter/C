#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[21];
}Item;

int main(){
    int n_listas = 0;
    scanf("%d",&n_listas);
    for(int c=0;c<n_listas;c++){
        getchar();
        char lista[20001];
        scanf("%[^\n]",lista);
        int n_letra = 0;
        int n_itens = 0;
        char nome[21] = {0};
        Item itens[1001];
        for(int i=0;i<strlen(lista);i++){
            /*Se o caracter for um espaço ou for o ultimo:
            Cria um Item com o nome
            Aumenta o numero de itens
            Zera o numero de letras
            Zera o nome*/
            if(lista[i]==32){
                strcpy(itens[n_itens].nome,nome);
                n_itens++;
                n_letra = 0;
                for(int j=0;j<20;j++)
                    nome[j] = 0;
            }
            //Se nao, adiciona o caracter ao nome
            else{
                nome[n_letra] = lista[i];
                n_letra++;
            }
        }
        strcpy(itens[n_itens].nome,nome);
        n_itens++;
        n_letra = 0;
        for(int j=0;j<20;j++)
            nome[j] = 0;
        //Ordenar a struct em ordem alfabetica e transforma os repetidos em 0
        for(int j = 0; j < n_itens; j++){
            for(int i = 0; i < n_itens-1; i++){
                for(int k = 0;k<strlen(itens[i].nome);k++){
                    if(strcmp(itens[i].nome,itens[i+1].nome)==0){
                        itens[i].nome[0] = 0;
                    }
                    if(itens[i].nome[k] > itens[i+1].nome[k]){
                        Item aux = itens[i];
                        itens[i] = itens[i+1];
                        itens[i+1] = aux;
                    }
                    if(itens[i].nome[k] != itens[i+1].nome[k])
                        break;
                }
            }
        }
        //Printar cada item que for diferente de 0
        for(int i=0;i<n_itens;i++){
            if(itens[i].nome[0]!=0){
                printf("%s",itens[i].nome);
                if(i != n_itens-1)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}