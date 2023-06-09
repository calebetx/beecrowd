//* O bee ta utilizando o código errado pra essa questão, as saídas não correspondem à realidade :v, esse código funciona mas da errado no bee(25%)

#include <stdio.h>

int main(){

    int N, v1, v2, contador;

    scanf("%d", &N);
    if (N >= 3 && N <= 500)
    {
        contador = 0;
        v2 = 3;
        for (size_t i = 0; i < N; i++)
        {
            scanf("%d", &v1);

            if (v1 != v2)
            {
                contador += 1;
            }
            if (i != 0)
            {
                v2 = v1;
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}

/*
#include <stdio.h>
int main() {
    int n, v1, v2, ac = 1;
    scanf("%d %d", &n, &v1);
    while (--n) {
        scanf("%d", &v2);
        if (v2 - v1) {
            ac++;
            v1 = v2;
        }
    }
    printf("%d\n", ac);
    return 0;
}
*\