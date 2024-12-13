#include <stdio.h>

int main()
{
	int n;
	int escadinhas = 0;
	scanf("%d", &n);
	int sequencia[n];
	for(int i = 0; i<n; i++)
		scanf("%d", &sequencia[i]);
    if(n<4)
        escadinhas = 1;
    else{
        for(int i = 0; i<n; i++){
            int diferenca;
            diferenca = sequencia[i+1] - sequencia[i];
            if(diferenca != sequencia[i+2] - sequencia[i+1])
                escadinhas++;
        }
        escadinhas--;
    }
    printf("%d\n", escadinhas);
	return 0;
}