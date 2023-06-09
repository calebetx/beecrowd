#include <stdio.h>
#include <stdlib.h>
int main(){
    int N, F1, F2, maior, menor, resto, mdc;
    scanf("%d", &N);
    if(N >= 1 && N <= 3000){
        for(size_t i = 0; i < N; i++){
            scanf("%d%d", &F1, &F2);
            if((F1 >= 1 && F1 <= 1000) && (F2 >= 1 && F2 <= 1000)){
                if(F1 > F2){
                    maior = F1;
                    menor = F2;
                }
                else if(F1 < F2){
                    maior = F2;
                    menor = F1;
                }
                else{
                    maior = F1;
                    menor = F2;
                }
                
                while(menor != 0){
                    resto = maior % menor;
                    maior = menor;
                    menor = resto;
                }
                
                mdc = maior;
                printf("%d\n", mdc);
            }
        }
    }
    return 0;
}