#include<stdio.h>

int main ()
{
    int a,b,c,k,l;
    scanf("%d %d",&a,&b);
    c=sqrt(pow(b,2)-pow(a,2));
    k=a+b+c;
    l=0.5*c*a;
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", k);
    printf("Luas = %d cm^2", l);
}
