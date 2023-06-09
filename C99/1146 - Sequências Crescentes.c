#include <stdio.h>

int main() {
    
    int entrada, aux;

    while (entrada != 0)
    {
        scanf("%d", &entrada);

        if (entrada != 0)
        {
            aux = 1;
            while (aux <= entrada)
            {
                if (aux == entrada)
                {
                    printf("%d\n", aux);
                    aux += 1;
                }
                else
                {
                    printf("%d ", aux);
                    aux += 1;
                }
            }
        }
        
    }

    return 0;
}