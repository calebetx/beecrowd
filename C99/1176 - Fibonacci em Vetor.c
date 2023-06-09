#include <stdio.h>

double F[60], CF[60];

void calcula(int n){
    if(F[n] == -1){
        calcula(n - 1);
        calcula(n - 2);

        F[n] = F[n - 1] + F[n - 2];
        CF[n] = CF[n - 1] + CF[n - 2] + 1;
    }
}

int main(){
    int N, X;

    F[0] = 0;
    F[1] = 1;

    CF[0] = 1;
    CF[1] = 1;

    for(int i = 2; i < 61; ++i){
        F[i] = -1;
        CF[i] = -1;
    }

    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &X);
        calcula(X);
        printf("Fib(%d) = %.0lf\n", X, F[X]);
    }

    return 0;
}