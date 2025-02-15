#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int c;c<n;c++){
        int f1;
        int f2;
        scanf("%d %d",&f1,&f2);
        int resto = 1;
        do{
            resto = f1 % f2;
            f1 = f2;
            f2 = resto;
        }while(resto != 0);
        printf("%d\n",f1);
    }
}