#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int N, aux, Quantia;
    char Tipo;
    int nCoelhos, nSapos, nRatos;
    float nTotal, pCoelho, pSapo, pRato;

    scanf("%d", &N);

    aux = 0;
    nCoelhos = 0;
    nRatos = 0;
    nSapos = 0;
    while(aux < N)
    {
        Quantia = 0;
        Tipo = 'Z';

        while (Quantia < 1 || Quantia > 15)
        {
            scanf("%d %c", &Quantia, &Tipo);
        }

        if (Tipo == 'C')
        {
            nCoelhos += Quantia;
        }
        else if (Tipo == 'R')
        {
            nRatos += Quantia;
        }
        else if (Tipo == 'S')
        {
            nSapos += Quantia;
        }

        aux += 1;
    }

    nTotal = nCoelhos + nRatos + nSapos;

    pCoelho = (nCoelhos / nTotal);
    pSapo = (nSapos / nTotal);
    pRato = (nRatos / nTotal);

    printf("Total: %.0f cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", nTotal, nCoelhos, nRatos, nSapos, pCoelho * 100, pRato * 100, pSapo * 100);
 
    return 0;
}