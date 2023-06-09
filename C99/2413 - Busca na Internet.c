#include <stdio.h>
 
int main() {

    int t, link1;

    scanf("%d", &t);
    if (t >= 1 && t <= 1000)
    {
        link1 = t * 4;
        printf("%d\n", link1);
    }
    
    return 0;
}