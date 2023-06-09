#include <stdio.h>
int main(){
    double X, N[100];
    scanf("%lf", &X);
    N[0] = X;
    for(size_t i = 0; i < 100; i++){
        if(i > 0)
            N[i] = N[i]/2;
        printf("N[%d] = %.4lf\n", i, N[i]);
        N[i + 1] = N[i];
    }
    return 0;
}