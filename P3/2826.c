#include <stdio.h>
#include <string.h>

int main(){
    char A[21];
    char B[21];
    scanf("%s", A);
    scanf("%s", B);
    int menor_tamanho;
    int menor_string;
    if(strlen(A)>strlen(B)){
        menor_tamanho = strlen(B);
        menor_string = 2;        
    }
    else{
        menor_tamanho = strlen(A);
        menor_string = 1;
    }
    for(int i=0;i<menor_tamanho;i++){
        if(A[i]>B[i]){
            printf("%s\n",B);
            printf("%s\n",A);
            break;
        }
        else if(A[i]<B[i]){
            printf("%s\n",A);
            printf("%s\n",B);
            break;
        }
        else if(i==menor_tamanho-1){
            if(menor_string == 1){
                printf("%s\n",A);
                printf("%s\n",B);
            }else{
                printf("%s\n",B);
                printf("%s\n",A);
            }
        }
    }
    return 0;
}