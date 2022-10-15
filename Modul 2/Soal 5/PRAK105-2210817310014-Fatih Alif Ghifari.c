#include<stdio.h>

int main ()
{
    int a,b,x,y,h;
    a=9;
    b=5;
    x=8;
    y=8;
    h=((a%b)+(x%y));
    printf("Variabel A bernilai %d\n", a);
    printf("Variabel B bernilai %d\n", b);
    printf("Variabel X bernilai %d\n", x);
    printf("Variable Y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", h);
    return 0;
}