#include <stdio.h>
 
int main() {
    int par[5];
    int impar[5];
    int n;
    int cimpar = 0;
    int cpar = 0;
    for(int i = 0; i < 15; i++){
        scanf("%d", &n);
        //Verificando se o numero eh par
        if (n % 2 == 0){
            //Adicionando o numero na array par
            par[cpar] = n;
            cpar++;
            //Verificando se o par esta cheio ou se eh a ultima repeticao
            if (cpar == 5){
                for(int j = 0; j < cpar; j++){
                    //Printando cada elemento da array
                    printf("par[%d] = %d\n", j, par[j]);
                }
                cpar = 0;
            }
        } else {
            impar[cimpar] = n;
            cimpar++;
            if (cimpar == 5){
                for(int j = 0; j < cimpar; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                cimpar = 0;
            }
        }
        //Se o loop for terminar, eh preciso imprimir tudo o que tiver nas arrays
        if(i==14){
            for(int j = 0; j < cimpar; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
            for(int j = 0; j < cpar; j++){
                    //Printando cada elemento da array
                    printf("par[%d] = %d\n", j, par[j]);
                }
        }
    }
    return 0;
}