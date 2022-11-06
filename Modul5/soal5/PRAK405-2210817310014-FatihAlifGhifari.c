#include <stdio.h>

int main ()
{
    int i, j, angka1, angka2, h1, h2 ,h3;
    h1 = 0;
    h2 = 0;
    h3 = 0;
    scanf ("%d %d", &angka1, &angka2);
    for (i = 0; i < angka1; i++){
        for (j = i; j >= 0; j--){
            printf ("(%d * %d)", j + 1, angka2);
            if (j > 0){
                printf (" + ");
            }
        }
        h1 = (i + 1) * angka2;
        h2 = h2 + h1; 
        printf (" = %d\n", h2);
        h3 = h3 + h2;
    }
    printf("%d\n", h3);
    return 0;
}