#include <stdio.h>

int main ()
{
    int in,i=0;
    while(i<=2){
    printf("-->");
    scanf("%d", &in);
    if (in==0)
        printf("nol\n");
    else if (in<=0)
        printf("negatif\n");
    else if (in>=0)
        printf("positif\n");
    i++;
    }
}
