#include<stdio.h>

int main ()
{
    int in,i;
    while (i<=4) {
        printf ("-->");
        scanf ("%d", &in);
        if (in>0&&in<10){
            printf("Satuan\n");
        }
        else if (in>10&&in<20){
            printf("Belasan\n");
        }
        else if (in>=10&&in<100){
            printf("Puluhan\n");
        }
        else if (in==0){
            printf("Nol\n");
        }
        else if (in>99){
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        }
        i++;
    }
    return 0;
}
