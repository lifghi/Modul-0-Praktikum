#include <stdio.h>

int main ()
{
    int i, angka;
    printf("Masukan angka : ");
    scanf ("%d", &angka);
    for ( i = 1 ; i <= angka ; i++){
        if ( i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    for ( i = angka ; i >= 1 ; i--){
        if ( i % 2 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
