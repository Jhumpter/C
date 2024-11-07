#include <stdio.h>

int main() {
    int dia, hora, minuto , segundo;
    int dia2, hora2, minuto2, segundo2;
    scanf("Dia %d\n", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
    scanf("Dia %d\n", &dia2);
    scanf("%d : %d : %d\n", &hora2, &minuto2, &segundo2);
    dia = dia2 - dia;
    if (hora2 < hora) {
        dia -= 1;
        hora = hora2 - hora + 24;
    } else {
        hora = hora2 - hora;
    }
    if (minuto2 < minuto) {
        hora -= 1; 
        minuto = minuto2 - minuto + 60;
    } else {
        minuto = minuto2 - minuto;
    }
    if (segundo2 < segundo) {
        minuto -= 1; 
        segundo = segundo2 - segundo + 60;
    } else {
        segundo = segundo2 - segundo;
    }
    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);
    return 0;
}
