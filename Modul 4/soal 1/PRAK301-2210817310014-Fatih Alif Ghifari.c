#include <stdio.h>

int main ()
{
    int i = 0;
    while (i<=2){
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        if (a>b){
            printf("\n-->%d %d\n\n", b, a);
        }
        else
            printf("\n-->%d %d\n\n", a, b);
        i++;
    }
    return 0;
}
