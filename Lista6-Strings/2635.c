#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char resultados[n][100];
    for(int i=0;i<n;i++)
        scanf("%s", resultados[i]);
    int q;
    scanf("%d", &q);
    for(int i=0;i<q;i++){
        int resultados_encontrados = 0;
        int maior_resultado = 0;
        char pesquisa[100] = {0};
        scanf("%s", pesquisa);
        int tamanho = strlen(pesquisa);
        for(int j=0;j<n;j++){
            if(strncmp(pesquisa,resultados[j],tamanho)==0){
                resultados_encontrados++;
                if(strlen(resultados[j])>maior_resultado)
                    maior_resultado = strlen(resultados[j]);
            }
        }
        if(resultados_encontrados>0)
            printf("%d %d\n", resultados_encontrados, maior_resultado);
        else
            printf("-1\n");
    }
    return 0;
}