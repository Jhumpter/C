#include <stdio.h>

void fibonacci(int n){
    int seq[50];
    seq[0] = 0;
    seq[1] = 1;
    for(int c = 2;c<50;c++){
        seq[c] = seq[c-1] + seq[c-2];
    }
    for(int c=0;c<n;c++){
        printf("%d",seq[c]);
        if(c!=n-1)
            printf(" ");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    fibonacci(n);
    printf("\n");
}