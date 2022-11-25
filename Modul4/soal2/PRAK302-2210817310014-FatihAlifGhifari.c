#include<stdio.h>

int main ()
{
    int bil;
    printf("\n");
    scanf("%d", &bil);

    if (bil>=80){
        printf("\nA\n");
    }
    else if (bil>=70&&bil<79){
        printf("\nB\n");
    }
    else if (bil>=60&&bil<=69){
        printf("\nC\n");
    }
    else if (bil>=50&&bil<=59){
        printf("\nD\n");
    }
    else if (bil<50){
        printf("\nE\n");
    }
}
