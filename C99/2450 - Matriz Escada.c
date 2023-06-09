#include <stdio.h>

int main(){

    size_t N, M;
    int elemEsqLIN = 0, elemEsqCOL = 0;
    int valido = 1;
    int valido2 = 1;
    size_t zeros;
    int linha;

    scanf("%d %d", &N, &M);
    int matriz[N][M];
    if(N >= 1 && M <= 500){
        for(size_t i = 0; i < N; i++){
            for(size_t j = 0; j < M; j++){
                scanf("%d", &matriz[i][j]);

                if(matriz[i][j] < 0 || matriz[i][j] > 100000){
                    valido2 = 0;
                    break;
                }   
            }
            if(valido2 == 0)
                break;
        }
        
        if(valido2 == 1){
            for(size_t i = 0; i < N; i++){
                zeros = 0;
                for(size_t j = 0; j < M; j++){
                    if(matriz[i][j] == 0)
                        zeros++;

                    if(zeros == M){
                        linha = i;
                        break;
                    }
                }
                if(zeros == M)
                    break;
            }

            if(zeros == M){
                for(size_t i = linha; i < N; i++){
                    for(size_t j = 0; j < M; j++){
                        if(matriz[i][j] != 0){
                            valido = 0;
                            break;
                        }
                    }
                    if(valido == 0)
                        break;
                }
            }

            for(size_t i = 0; i < N; i++){
                elemEsqCOL = 0;
                elemEsqLIN = 0;
                for(size_t j = 0; j < M; j++){
                        if(matriz[i][j] != 0){
                            elemEsqLIN = i;
                            elemEsqCOL = j; 
                            break;
                        }
                    }
                
                for (size_t i = elemEsqLIN + 1; i < N; i++)
                {
                    for (size_t j = elemEsqCOL; j > 0; j--)
                    {
                        if(matriz[i][j] != 0){
                            valido = 0;
                            break;
                        }
                    }
                    if(valido == 0)
                        break;
                }
                if(valido == 0)
                    break;
            }

        if(valido == 1)
            printf("S\n");
        else
            printf("N\n");
        }
    }

    return 0;
}