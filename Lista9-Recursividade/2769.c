#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int te1, te2;
        scanf("%d %d", &te1, &te2);
        int t_etapa1[N], t_etapa2[N];
        int transicao12[N - 1], transicao21[N - 1];
        for (int i = 0; i < N; i++)
            scanf("%d", &t_etapa1[i]);
        for (int i = 0; i < N; i++)
            scanf("%d", &t_etapa2[i]);
        for (int i = 0; i < N - 1; i++)
            scanf("%d", &transicao12[i]);
        for (int i = 0; i < N - 1; i++)
            scanf("%d", &transicao21[i]);
        int s1, s2;
        scanf("%d %d", &s1, &s2);
        int dp1[N], dp2[N];
        dp1[0] = te1 + t_etapa1[0];
        dp2[0] = te2 + t_etapa2[0];
        for (int i = 1; i < N; i++) {
            if (dp1[i - 1] + t_etapa1[i] < dp2[i - 1] + transicao21[i - 1] + t_etapa1[i]) {
                dp1[i] = dp1[i - 1] + t_etapa1[i];
            } else {
                dp1[i] = dp2[i - 1] + transicao21[i - 1] + t_etapa1[i];
            }
            if (dp2[i - 1] + t_etapa2[i] < dp1[i - 1] + transicao12[i - 1] + t_etapa2[i]) {
                dp2[i] = dp2[i - 1] + t_etapa2[i];
            } else {
                dp2[i] = dp1[i - 1] + transicao12[i - 1] + t_etapa2[i];
            }
        }
        int resultado;
        if (dp1[N - 1] + s1 < dp2[N - 1] + s2) {
            resultado = dp1[N - 1] + s1;
        } else {
            resultado = dp2[N - 1] + s2;
        }
        printf("%d\n", resultado);
    }
    return 0;
}