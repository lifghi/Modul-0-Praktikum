#include<stdio.h>

int main ()
{
    int a,b,c,k,h,p;
    a=4;
    b=5;
    c=7;
    k=(a+b+c);
    h=85000;
    p=(k*h);
    printf("Diketahui :\nPanjang sisi segitiga berturut-turut adalah %d, %d, %d\n", a, b, c);
    printf("keliling tanah pak Dengklek adalah %d\n", k);
    printf("harga tanah permeter adalah %d\nJawaban :\n", h);
    printf("Biaya yang diperlukan pak Dengklek adalah : Rp %d", p);
}