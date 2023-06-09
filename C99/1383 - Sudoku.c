#include <stdio.h>

int main(){

    int jogoTodo[8][8];
    int n;

    scanf("%d", &n);
    if(n > 0){
        for(int q = 0; q < n; q++){

            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    scanf("%d", &jogoTodo[i][j]);
                }
            }

            // Bloco
            
        }


    }
    return 0;
}