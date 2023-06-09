#include <stdio.h>

int main(){

    int n, corrida, aux;

    aux = 1;
    do{
        scanf("%d", &n);

        if(n == 0)
            break;

        if(n >= 0 && n <= 100000){
            corrida = 0;
            while(n > 1){
                if(n % 3 == 0)
                    n = n / 3;
                else
                    n = n / 3 + 1;

                corrida += n;
            }
            printf("%d\n", corrida);
        }

    }while(aux == 1);

    return 0;
}