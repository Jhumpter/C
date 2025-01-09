#include <stdio.h>

int main(){
    int testes;
    scanf("%d", &testes);
    for(int i=0; i<testes; i++){
        int c = 0;
        int inicio, fim;
        scanf("%d %d", &inicio, &fim);
        int sequencia[fim-inicio+1];
        for(int j=inicio; j<fim+1; j++){
            printf("%d", j);
            sequencia[c] = j;
            c++;
        }
        for(int j=c-1; j>=0; j--){
            int unidades = 0;
            int dezenas = 0;
            int centenas = 0;
            int milhar = 0;
            int dezmilhar = 0;
            int casas = 1;
            if(sequencia[j]<10) unidades = sequencia[j];
            if(sequencia[j]>=10 && sequencia[j]<100){
                dezenas = sequencia[j]/10;
                unidades = sequencia[j]-dezenas*10;
                sequencia[j] = (unidades*10)+(dezenas);
                casas = 2;
            }
            else if(sequencia[j]>99 && sequencia[j]<1000){
                centenas = sequencia[j]/100;
                dezenas = (sequencia[j]-(centenas*100))/10;
                unidades = sequencia[j]-(dezenas*10)-(centenas*100);
                sequencia[j] = (unidades*100)+(dezenas*10)+(centenas);
                casas = 3;
            }
            else if(sequencia[j]>999 && sequencia[j]<10000){
                milhar = sequencia[j]/1000;
                centenas = (sequencia[j]-(milhar*1000))/100;
                dezenas = (sequencia[j]-(milhar*1000)-(centenas*100))/10;
                unidades = sequencia[j]-(milhar*1000)-(centenas*100)-(dezenas*10);
                sequencia[j] = (unidades*1000)+(dezenas*100)+(centenas*10)+milhar;
                casas = 4;
            }
            else if(sequencia[j]>9999 && sequencia[j]<100000){
                dezmilhar = sequencia[j]/10000;
                milhar = (sequencia[j]-dezmilhar*10000)/1000;
                centenas = (sequencia[j]-(milhar*1000)-(dezmilhar*10000))/100;
                dezenas = (sequencia[j]-(milhar*1000)-(centenas*100)-(dezmilhar*10000))/100;
                unidades = sequencia[j]-(milhar*1000)-(centenas*100)-(dezenas*10)-(dezmilhar*10000);
                sequencia[j] = (unidades*10000)+(dezenas*1000)+(centenas*100)+(milhar*10)+dezmilhar;
                casas = 5;
            }
            if(unidades==0){
                printf("0");
                if(dezenas==0 && casas>2) printf("0");
                if(dezenas==0 && centenas==0 && casas>3) printf("0");
                if(dezenas==0 && centenas==0 && milhar==0 && casas>4) printf("0");
            } 
            printf("%d", sequencia[j]);
        }
        printf("\n");
    }
    return 0;
} //Nao aceitou mas nao mostra porque