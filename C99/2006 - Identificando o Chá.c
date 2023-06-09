#include <stdio.h>
 
int main() {
 
    int T;
    int A, B, C, D, E;
    int acertos;

    scanf("%d", &T);
    if (T >= 1 && T <= 4)
    {
        acertos = 0;

        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
        if (A == T)
        {
            acertos += 1;
        }
        if (B == T)
        {
            acertos += 1;
        }
        if (C == T)
        {
            acertos += 1;
        }
        if (D == T)
        {
            acertos += 1;
        }
        if (E == T)
        {
            acertos += 1;
        }

        printf("%d\n", acertos);
    }
    return 0;
}