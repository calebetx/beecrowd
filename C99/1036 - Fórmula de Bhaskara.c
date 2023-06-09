#include <stdio.h>
#include <math.h>
 
int main() {
 
    float A, B, C;
    float raiz1, raiz2;

    float delta;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    delta = ((pow(B, 2)) - 4 * A * C);

    if (delta >= 0 && A != 0)
    {
        raiz1 = ((- B) + sqrt(delta)) / (2 * A);
        raiz2 = ((- B) - sqrt(delta)) / (2 * A);

        printf("R1 = %.5f\n", raiz1);
        printf("R2 = %.5f\n", raiz2);
    }
    else
    {
       printf("Impossivel calcular\n");
    }
 
    return 0;
}