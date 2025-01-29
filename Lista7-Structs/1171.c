#include <stdio.h>
 
int main() {
    int n = 0;
    int aux = 0;
    scanf("%d", &n);
    int numeros[n];
    int contRepetidos;
    for(int i = 0; i<n; i++){
        int numero = 0;
        //Ler numero
        scanf("%d", &numero);
        //Colocar na array
        numeros[i] = numero;
    }
    //Ordenar a array em ordem crescente
    /*Para cada i que passa, o j maximo diminui, pois o segundo loop
    coloca o maior numero analisado em ultimo lugar. O -1 eh para o
    loop nao ultrapassar a array com o j+1*/
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    //Verificar cada numero que aparece e contar ate onde aparece(estarao ordenados)
    //O incremento pula a qtde de repetidos, passando para o proximo numero
    for(int i = 0; i<n; i+=contRepetidos){
        contRepetidos = 0;
        int numeroContado = 0;
        for(int j = 0; j<n; j++){
            if(numeros[i]==numeros[j]){
                contRepetidos++; //Conta numeros repetidos
                numeroContado = numeros[i]; //Guarda o numero para o print
            }
        }
        //Printar
        printf("%d aparece %d vez(es)\n", numeroContado, contRepetidos);
    }
    return 0;
}