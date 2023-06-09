#include <stdio.h>
#include <math.h>

int main()
{
    int X;
    float Y;
    float consumo;
    
    scanf("%d \n %f", &X, &Y);

    consumo = X / Y;

    printf("%.3f km/l\n", consumo);
        
    return 0;
}