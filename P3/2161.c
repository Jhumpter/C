#include <stdio.h>

double raiz_10(int n){
    if(n==0)
        return 0;
    return(1.0/(6+raiz_10(n-1)));
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%.10lf\n",raiz_10(n)+3);
    return 0;
}