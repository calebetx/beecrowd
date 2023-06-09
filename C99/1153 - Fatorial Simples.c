#include <stdio.h>
int main() {
     int N, aux, aux2, aux3;

    scanf("%d", &N);
    if (N > 0 && N < 13)
    {
        aux = 0;
        aux2 = N;
        for (size_t i = 0; i < aux2; i++)
        {
            aux += 1;
            if (aux < N)
            {
                aux3 = aux2 - aux;
                if (aux3 > 0)
                {
                    N = N * aux3;
                }
            }
        }
        printf("%d\n", N);
    }
}