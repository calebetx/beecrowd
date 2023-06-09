#include <stdio.h>
int main() {
     int M, N, aux, aux2, aux3;

    while((scanf("%d %d", &M, &N)) != EOF){
        if (M >= 0 && M <= 13)
        {
            aux = 0;
            aux2 = M;
            for (size_t i = 0; i < aux2; i++)
            {
                aux += 1;
                if (aux < M)
                {
                    aux3 = aux2 - aux;
                    if (aux3 > 0)
                    {
                        M = M * aux3;
                    }
                }
            }
        }

        if (N >= 0 && N <= 20)
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
        }

        printf("%d\n", (M + N));
    }

    return 0;
}