#include<stdio.h>

int main ()
{
    float n1,n2,h;

    printf("Masukan Nilai Pertama :");
    scanf("%f", &n1);
    printf("Masukan Nilai Kedua :");
    scanf("%f", &n2);
    h=n1+n2;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%0.2f\"",n1,n2,h);
    return 0;
}
