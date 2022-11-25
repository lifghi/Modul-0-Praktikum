#include<stdio.h>

int main ()
{
    float a, b, c, phi;
    phi=3.14;
    a=5;
    b=14;
    c=(b/a)/(2*phi);
    printf("Diketahui : \n");
    printf("Pak Dengklek Mengellingi Taman = %.0f Putaran\n", a);
    printf("Jarak Tempuh Pak Dengklek = %.0f Kilometer\n\n", b);
    printf("Jawaban :\n");
    printf("Jari-Jari Taman Yang Dikelilingi Pak Dengklek Adalah %.2f Kilometer", c);
    return 0;
}