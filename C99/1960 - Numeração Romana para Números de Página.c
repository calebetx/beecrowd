#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int N, aux;

    scanf("%d", &N);
    if (N > 0 && N < 1000)
    {   
        if (N >= 900)
        {
            printf("CM");
            N = N - 900;
            aux = 1;
        }
        else if (N >= 500)
        {
            printf("D");
            N = N - 500;
            aux = 2;
        }
        else if (N >= 100)
        {
            printf("C");
            N = N - 100;
            aux = 3;
        }
        if (N > 0)
        {
            if (N >= 300 && aux == 2)
            {
                printf("CCC");
                N = N - 300;
            }
            else if (N >= 200 && aux == 2)
            {
                printf("CC");
                N = N - 200;
            }
            else if (N >= 100 && aux == 2)
            {
                printf("C");
                N = N - 100;
            }
            if (N >= 300 && aux == 3)
            {
                printf("D");
                N = N - 300;
            }
            else if (N >= 200 && aux == 3)
            {
                printf("CC");
                N = N - 200;
            }
            else if (N >= 100 && aux == 3)
            {
                printf("C");
                N = N - 100;
            }
            if (N > 0)
            {
                if (N >= 90 && N <= 99)
                {
                    printf("XC");
                    N = N - 90;
                }
                else if (N >= 80 && N <= 89)
                {
                    printf("LXXX");
                    N = N - 80;
                }
                else if (N >= 70 && N <= 79)
                {
                    printf("LXX");
                    N = N - 70;
                }
                else if (N >= 60 && N <= 69)
                {
                    printf("LX");
                    N = N - 60;
                }
                else if (N >= 50 && N <= 59)
                {
                    printf("L");
                    N = N - 50;
                }
                else if (N >= 40 && N <= 49)
                {
                    printf("XL");
                    N = N - 40;
                }
                else if (N >= 30 && N <= 39)
                {
                    printf("XXX");
                    N = N - 30;
                }
                else if (N >= 20 && N <= 29)
                {
                    printf("XX");
                    N = N - 20;
                }
                else if (N >= 10 && N <= 19)
                {
                    printf("X");
                    N = N - 10;
                }         
            }  
            if (N > 0)
            {
                if (N == 1)
                {
                    printf("I");
                }
                else if (N == 2)
                {
                    printf("II");
                }
                else if (N == 3)
                {
                    printf("III");
                }
                else if (N == 4)
                {
                    printf("IV");
                }
                else if (N == 5)
                {
                    printf("V");
                }
                else if (N == 6)
                {
                    printf("VI");
                }
                else if (N == 7)
                {
                    printf("VII");
                }
                else if (N == 8)
                {
                    printf("VIII");
                }
                else if (N == 9)
                {
                    printf("IX");
                }
                else if (N == 10)
                {
                    printf("X");
                }
            }      
        }
    }
    printf("\n");

    return 0;
}