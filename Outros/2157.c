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
            if(sequencia[j]>=10 && sequencia[j]<100){
                dezenas = sequencia[j]/10;
                int unidades = sequencia[j]-dezenas*10;
                sequencia[j] = (unidades*10)+(dezenas);                
            }
            else if(sequencia[j]>99 && sequencia[j]<1000){
                centenas = sequencia[j]/100;
                dezenas = (sequencia[j]-(centenas*100))/10;
                unidades = sequencia[j]-(dezenas*10)-(centenas*100);
                sequencia[j] = (unidades*100)+(dezenas*10)+(centenas);
            }
            else if(sequencia[j]>999 && sequencia[j]<10000){
                milhar = sequencia[j]/1000;
                centenas = (sequencia[j]-(milhar*1000))/100;
                dezenas = (sequencia[j]-(milhar*1000)-(centenas*100))/10;
                unidades = sequencia[j]-(milhar*1000)-(centenas*100)-(dezenas*10);
                sequencia[j] = (unidades*1000)+(dezenas*100)+(centenas*10)+milhar;
            }
            else if(sequencia[j]>9999 && sequencia[j]<100000){
                dezmilhar = sequencia[j]/10000;
                milhar = (sequencia[j]-dezmilhar*10000)/1000;
                centenas = (sequencia[j]-(milhar*1000)-(dezmilhar*10000))/100;
                dezenas = (sequencia[j]-(milhar*1000)-(centenas*100)-(dezmilhar*10000))/100;
                unidades = sequencia[j]-(milhar*1000)-(centenas*100)-(dezenas*10)-(dezmilhar*10000);
                sequencia[j] = (unidades*10000)+(dezenas*1000)+(centenas*100)+(milhar*10)+dezmilhar;
            }
            if(unidades==0){
                if(dezmilhar!=0) printf("00001");
                else if(milhar!=0) printf("0001");
                else if(centenas!=0) printf("001");
                else if(dezenas!=0) printf("01");
                else printf("1");
            } 
            else printf("%d", sequencia[j]);
        }
        printf("\n");
    }
    return 0;
}