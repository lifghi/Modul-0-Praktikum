#include <stdio.h>

int main (void)
{
    int noProgram;
    float x, y;
    while (noProgram != 5) {
        printf ("Pilih Program : \n") ;
        printf ("1. Penjumlahan \n") ;
        printf ("2. Pengurangan \n") ;
        printf ("3. Perkalian \n") ;
        printf ("4. Pembagian \n") ;
        printf ("5. Exit \n") ;
        printf ("Masukan Pilihan : ") ;
        scanf ("%d", &noProgram) ;
        if (noProgram > 5 || noProgram <= 0) {
            printf ("Input anda salah, silahkan coba lagi \n\n") ;
        }
        else if (noProgram == 5) {
            break ;
        }
        else {
            printf ("Masukan nilai pertama : ") ;
            scanf ("%f", &x) ;
            printf ("Masukan nilai kedua : ") ;
            scanf ("%f", &y) ;
            if (noProgram == 1) {
                printf ("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x + y) ;
            }
            else if (noProgram == 2) {
                printf ("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x - y) ;
            }
            else if (noProgram == 3) {
                printf ("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x * y) ;
            }
            else {
                printf ("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x / y) ;
            }          
        }
    }
    printf ("\nTerimakasih, telah menggunakan kalkulator Bruno Alif Fernandes Van Persie\n") ;
}