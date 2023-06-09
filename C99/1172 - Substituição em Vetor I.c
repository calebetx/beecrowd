#include <stdio.h>
int main(){
    int entrada;
    for(size_t i = 0; i < 10; i++){
        scanf("%d", &entrada);

        if(entrada > 0){
            printf("X[%d] = %d\n", i, entrada);
        }
        else
            printf("X[%d] = 1\n", i);
    }
    return 0;
}