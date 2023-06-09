#include <stdio.h>
#include <math.h>

int main() {

int M, N, maior, menor, soma;

M = 1;
N = 1;
while ((M != 0 && M > 0) && (N != 0 && N > 0)) {
    soma = 0;
    scanf("%d", &M);
    if (M == 0 || M < 0)
    {
        break;
    }
    scanf("%d", &N);
    if (N == 0 || N < 0)
    {
        break;
    }
    
    maior = (M+N+abs(M-N))/2;
    if (maior == M)
    {
        menor = N;
    }
    else
        menor = M;

    if ((M != 0 && M > 0) && (N != 0 && N > 0)) {             
        for (int i = menor; i <= maior; i++) {
            soma = soma + i;

            if (i == maior)
            {
                printf("%d Sum=%d\n", maior, soma);
            }
            else
                if (i == menor)
                {
                    printf("%d ", menor);
                }
                else  
                    printf("%d ", i);

            }           
        }         
    }

    return 0;   
}            