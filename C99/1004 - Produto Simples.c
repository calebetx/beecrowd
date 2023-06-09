#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    int B;
    int PROD;
    double raiz;
    
    printf("Digite o valor de A:\n");
    scanf("%d", &A);

    printf("Digite o valor de B:\n");
    scanf("%d", &B);

    PROD = A / B;

    printf("PROD = %d\n", PROD);


    raiz = sqrt(A);
    printf("%f", raiz);

    return 0;
}