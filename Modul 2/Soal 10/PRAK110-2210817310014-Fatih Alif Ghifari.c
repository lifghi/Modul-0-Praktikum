#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, SA, SB, SC, k, l, axt;
    a=5;
    b=12;
    SA=a;
    SC=b;
    axt=(a*a) + (b*b);
    SB=sqrt(axt);
    k=SA+SB+SC;
    l=(SA*SC)/2;
    printf("Diketahui : \n");
    printf("Alas = %d cm\n", a);
    printf("Tinggi = %d cm\n\n", b);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", SA);
    printf("Sisi B = %d cm\n", SB);
    printf("Sisi C = %d cm\n", SC);
    printf("Keliling = %d cm\n", k);
    printf("Luas = %d cm\n"), l;
    return 0;
}