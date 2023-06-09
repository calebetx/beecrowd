#include <stdio.h>
#include <math.h>

int main()
{
    float A;
    float B;
    float media;

    scanf("%f", &A);
    scanf("%f", &B);

    media = (3.5 * A + 7.5 * B)/11;

    printf("MEDIA = %.5f\n", media);
}