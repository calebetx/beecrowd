#include <stdio.h>

int verLC(struct local posicao, int jogoTodo[8][8]){
    int x = posicao.i;
    int y = posicao.j;

    // Linha
    for (size_t i = 0; i < 9; i++)
    {
        if(jogoTodo[x][y] == jogoTodo[x][i]){
            if(y != i)
                return 0;
        }
    }

    // Coluna
    for (size_t i = 0; i < 9; i++)
    {
        if(jogoTodo[x][y] == jogoTodo[i][y]){
            if(x != i)
                return 0;
        }
    }

    return 1;
}

struct local{
    int i;
    int j;
};


int main(){

    int jogoTodo[8][8];
    int posicao;
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

            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    struct local posicao;
                    posicao.i = i;
                    posicao.j = j;

                    printf("%d", verLC(posicao, jogoTodo[8][8]));
                }
            }
            
        }


    }
    return 0;
}