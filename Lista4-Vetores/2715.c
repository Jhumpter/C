#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int trabalhos;
    int i;
    while(scanf("%lld", &trabalhos) != EOF){
        long long int dificuldade[trabalhos];
        long long int somaDificuldades = 0;
        for(i = 0; i < trabalhos; i++){
            scanf("%lld", &dificuldade[i]);
            somaDificuldades+=dificuldade[i];
        }
        long long int dificuldadeIdeal = somaDificuldades/2;
        long long int dificuldadesRangel = 0;
        for(i = 0; i < trabalhos; i++){
            //O que esta mais proximo da dificuldadeIdeal? dificuldadesRangel ou dificuldadesRangel+dificuldade[i]
            if(dificuldadesRangel>=dificuldadeIdeal) break;
            if(dificuldadesRangel+dificuldade[i]>dificuldadeIdeal){
                if(dificuldadeIdeal - dificuldadesRangel < dificuldadesRangel + dificuldade[i] - dificuldadeIdeal) break;
            }
            dificuldadesRangel+=dificuldade[i];
        }
        long long int dificuldadesGugu = somaDificuldades - dificuldadesRangel;
        long long int diferencaIdeal = abs(dificuldadesRangel - dificuldadesGugu);
        printf("%lld\n", diferencaIdeal);
    }

    return 0;
}