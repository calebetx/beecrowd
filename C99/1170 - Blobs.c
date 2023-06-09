#include <stdio.h>

int main(){

    int N, dias;
    float C;

    scanf("%d", &N);
    if(N >= 1 && N <= 1000){
        for(size_t i = 0; i < N; i++){
            scanf("%f", &C);
            
            dias = 0;
            if(C >= 1 && C <= 1000){
                while(C > 1){
                    C = C / 2;

                    dias += 1;
                }
            }
            printf("%d dias\n", dias);
        }
    }

    return 0;
}