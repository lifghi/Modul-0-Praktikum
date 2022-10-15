#include<stdio.h>

int main ()
{
    float a,b,c,d,x,y;
    char p='%';
    a=400000;
    b=350000;
    c=(a*13/100);
    d=(b*21/100);
    x=(a-c);
    y=(b-d);
    printf("Harga sepatu A adalah %.0f\n", a);
    printf("Harga sepatu B adalah %.0f\n", b);
    printf("Sepatu A mendapat diskon 13%c sehingga harganya menjadi %.0f\n", p, x);
    printf("Sepatu B mendapat diskon 21%c sehingga harganya menjadi %.0f", p, y);
    return 0;

}