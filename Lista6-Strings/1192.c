#include <stdio.h>

int main()
{
    int testes;
    scanf("%d", &testes);
    for(int i=0;i<testes;i++){
        int n1, n2;
        char ascii;
        scanf("%d %c %d", &n1, &ascii, &n2);
        if(n1==n2)
            printf("%d\n",n1*n2);
        else{
            if(65<=ascii && ascii<=90)
                printf("%d\n",n2-n1);
            else if(97<=ascii && ascii<=122)
                printf("%d\n",n1+n2);
        }
    }
    return 0;
}