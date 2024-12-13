#include <stdio.h>

int main()
{
    //Ler valores
    int estrelas;
    scanf("%d", &estrelas);
    int carneirosPorEstrela[estrelas+2];
    int estrelasVisitadas[estrelas];
    long long int totalCarneiros = 0;
    int i;
    int quantasEstrelasVisitadas = 0;
    carneirosPorEstrela[0] = -1;
    carneirosPorEstrela[estrelas+1] = -1;
    for(i = 1; i<estrelas+1; i++){
        scanf("%d", &carneirosPorEstrela[i]);
        totalCarneiros+=carneirosPorEstrela[i];
    }
    i = 1;
    int carneirosPorEstrelaOriginal = carneirosPorEstrela[i];
    for(;;){
        if(carneirosPorEstrela[i] < 0) break;
        if(estrelasVisitadas[i-1] != -1)
            quantasEstrelasVisitadas++;
        estrelasVisitadas[i-1] = -1;
        if(carneirosPorEstrela[i]!=0){
            carneirosPorEstrela[i]--;
            totalCarneiros--;
        }
        if(carneirosPorEstrela[i]!=0){
            carneirosPorEstrelaOriginal = carneirosPorEstrela[i] + 1;
        }
        if(carneirosPorEstrelaOriginal%2 == 0) i--;
        else if (carneirosPorEstrelaOriginal%2 != 0) i++;
    }
    printf("%d %lld\n", quantasEstrelasVisitadas, totalCarneiros--);
    return 0;
}