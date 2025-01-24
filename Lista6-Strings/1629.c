#include <stdio.h>
#include <string.h>

int main()
{
    for(;;){
        int testes;
        scanf("%d",&testes);
        if(testes==0)
            break;
        for(int i=0;i<testes;i++){
            getchar();
            char compactada[1001];
            scanf("%s",compactada);
            char zeros[1001]={0};
            char uns[1001]={0};
            int c0 = 0;
            int c1 = 0;
            for(int j=0;j<strlen(compactada);j++){
                if(j%2==0){
                    zeros[c0] = compactada[j];
                    c0++;
                }
                else{
                    uns[c1] = compactada[j];
                    c1++;
                }
            }
            int soma_algar0 = 0;
            for(int j=0;j<strlen(zeros);j++){
                soma_algar0 += zeros[j]-48;
            }
            int soma_algar1 = 0;
            for(int j=0;j<strlen(uns);j++){
                soma_algar1 += uns[j]-48;
            }
            int unidades0 = 0;
            int dezenas0 = 0;
            int centenas0 = 0;
            int milhar0 = 0;
            int soma_da_soma0 = 0;
            if(soma_algar0>=10 && soma_algar0<100){
                dezenas0 = soma_algar0/10;
                unidades0 = soma_algar0-dezenas0*10;
                soma_da_soma0 = unidades0+dezenas0;
            }
            else if(soma_algar0>99 && soma_algar0<1000){
                centenas0 = soma_algar0/100;
                dezenas0 = (soma_algar0-(centenas0*100))/10;
                unidades0 = soma_algar0-(dezenas0*10)-(centenas0*100);
                soma_da_soma0 = unidades0+dezenas0+centenas0;
            }
            else if(soma_algar0>999 && soma_algar0<10000){
                milhar0 = soma_algar0/1000;
                centenas0 = (soma_algar0-(milhar0*1000))/100;
                dezenas0 = (soma_algar0-(milhar0*1000)-(centenas0*100))/10;
                unidades0 = soma_algar0-(milhar0*1000)-(centenas0*100)-(dezenas0*10);
                soma_da_soma0 = unidades0+dezenas0+centenas0+milhar0;
            }
            else 
                soma_da_soma0 = soma_algar0;
            int unidades1 = 0;
            int dezenas1 = 0;
            int centenas1 = 0;
            int milhar1 = 0;
            int soma_da_soma1 = 0;
            if(soma_algar1>=10 && soma_algar1<100){
                dezenas1 = soma_algar1/10;
                unidades1 = soma_algar1-dezenas1*10;
                soma_da_soma1 = unidades1+dezenas1;
            }
            else if(soma_algar1>99 && soma_algar1<1000){
                centenas1 = soma_algar1/100;
                dezenas1 = (soma_algar1-(centenas1*100))/10;
                unidades1 = soma_algar1-(dezenas1*10)-(centenas1*100);
                soma_da_soma1 = unidades1+dezenas1+centenas1;
            }
            else if(soma_algar1>999 && soma_algar1<10000){
                milhar1 = soma_algar1/1000;
                centenas1 = (soma_algar1-(milhar1*1000))/100;
                dezenas1 = (soma_algar1-(milhar1*1000)-(centenas1*100))/10;
                unidades1 = soma_algar1-(milhar1*1000)-(centenas1*100)-(dezenas1*10);
                soma_da_soma1 = unidades1+dezenas1+centenas1+milhar1;
            }
            else 
                soma_da_soma1 = soma_algar1;
            //A soma dos algarismos ainda ta dando > 9
            //Eh preciso somar novamente os algorismos
            int soma_final = soma_da_soma1+soma_da_soma0;
            printf("%d\n",soma_final);
        }
    }
    return 0;
}