#include<stdio.h>

int main ()
{
    int a,b,c,x,y,z;
    a=4;
    b=8;
    c=3;
    x=(a==b);
    y=(b>c);
    z=(a!=c);
    printf("variabel a bernilai %d\n", a);
    printf("variabel b bernilai %d\n", b);
    printf("variabel c bernilai %d\n", c);
    printf("apakah a sama dengan b? jawabannya adalah %d\n", x);
    printf("apakah b lebih besar dari c? jawabannya adalah %d\n", y);
    printf("apakah a tidak sama dengan c? jawabannya adalah %d\n", z);
    return 0;
}