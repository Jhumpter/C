#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1 = 1, y1, x2, y2, mov;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    while(x1 != 0)
    {
        if(x1 == x2 && y1 == y2) mov = 0;
        else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
        {
            mov = 1;
        } else mov = 2;
        printf("%d\n", mov);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }
    return 0;
}