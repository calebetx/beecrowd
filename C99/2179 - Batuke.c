#include <stdio.h>

int main(){

    int N, F, C;

    scanf("%d %d %d", &N, &F, &C);
    if(N > 2 && N <= 10){

        int matriz[N][N];
        int aux = 1;
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++)
            {
                matriz[i][j] = aux;
                aux++;
            }
        }




    }





    return 0;
}