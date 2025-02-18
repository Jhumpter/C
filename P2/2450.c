#include <stdio.h>
 
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int matriz[n][m];
    int c=0;
    for(int i=0;i<n; i++){
        for(int j=0;j<m;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    //Testando c2
    for(int i=0;i<n;i++){
        int maior=0;
        for(int j=0;j<m;j++){
            if(matriz[i][j]!=0 &&maior==0){
                maior++;
                for(int k=i+1;k<n;k++){
                    if(matriz[k][j]!=0)c++;
                }
            }
        }
    }
    //Testando c1
    for(int i=0;i<n;i++){
        int zeros = 0;
        for(int j=0;j<m;j++){
            if(matriz[i][j]==0)zeros++;
        }
        if(zeros==m){
            for(int k=i+1;k<n;k++){
                for(int l=0;l<m;l++){
                    if(matriz[k][l]!=0)c++;
                }
            }
        }
    }
    if(c==0)printf("S\n");
    if(c>0)printf("N\n");
    return 0;
}