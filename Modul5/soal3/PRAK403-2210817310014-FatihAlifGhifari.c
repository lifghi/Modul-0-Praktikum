#include <stdio.h>

int main (void)
{
    int angka1, angka2, i, j;
    scanf("%d %d", &angka1, &angka2);
    if (angka1 > angka2){
        for (i = angka1, j = angka2; i >= angka2, j <= angka1; i--, j++){
            printf("%d %d", i, j);
            if (i == angka2){
                break ;
            }
            else {
                printf("- ");
            }
        }
    }
    else {
        for (i = angka1, j = angka2; i <= angka2, j >= angka1; i++, j--){
            printf("%d %d", i, j);
            if (i == angka2){
                break ;
            }
            else {
                printf("- ");
            }
        }
    }
}