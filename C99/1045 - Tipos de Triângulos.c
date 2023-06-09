#include <stdio.h>
#include <math.h>
 
int main() {
 
    float A, B, C;
    float aux;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    while (A < 0 || B < 0 || C < 0)
    {
        scanf("%f", &A);
        scanf("%f", &B);
        scanf("%f", &C);
    }

    if (B > A && B > C)
    {
        aux = A;
        A = B;
        B = aux;
        if (C > B)
        {
            aux = B;
            B = C;
            C = aux;
        }
    }
    else if (C > A && C > B)
    {
        aux = A;
        A = C;
        C = aux;
        if (C > B)
        {
            aux = B;
            B = C;
            C = aux;
        }
    }
    else if (C > B)
    {
        aux = B;
        B = C;
        C = aux;
    }

    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (pow(A,2) == pow(B,2) + pow(C,2))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(A,2) > pow(B,2) + pow(C,2))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(A,2) < pow(B,2) + pow(C,2))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C && A == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (((A == B) && (!(A == C))) || ((B == C) && (!(A == C))))
        {
            printf("TRIANGULO ISOSCELES\n");
        }   
    }
 
    return 0;
}