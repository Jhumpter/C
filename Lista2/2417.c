#include <stdio.h>

int main() {
    int Cv, Ce, Cs, Fv, Fe, Fs, Cp, Fp;
    scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
    Cp = Cv*3 + Ce;
    Fp = Fv*3 + Fe;
    if (Cp > Fp) printf("C\n");
    else if (Fp > Cp) printf("F\n");
    else
    {
        if (Cs > Fs) printf("C\n");
        else if (Fs > Cs) printf("F\n");
        else printf("=\n");
    }
    return 0;
}