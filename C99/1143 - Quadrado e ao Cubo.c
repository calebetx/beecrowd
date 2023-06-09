#include <stdio.h>
#include <math.h>

int main(){

    int N, aux;

    scanf("%d", &N);
    if (N > 1 && N < 1000)
    {
        for (size_t i = 1; i < (N + 1); i++)
        {
            aux = i;
            printf("%d %.0lf %.0lf\n", (aux), (pow(aux, 2)), (pow(aux, 3)));
        }
    }
    
    return 0;
}