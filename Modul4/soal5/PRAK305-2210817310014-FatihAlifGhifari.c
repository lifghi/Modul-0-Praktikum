#include <stdio.h>

int main ()
{
    int in,i,h,j,d,m;
    while(i<=4){
        printf("-->");
        scanf("%d", &in);
        h=in/86400;
        j=(in/3600)%24;
        m=(in/60)%60;
        d=in%60;
        if (in<=3600){
            printf("%.2d:%.2d:%.2d\n", j,m,d);
    }else if (in>3600 && in<86400){
        printf("%.2d:%.2d:%.2d\n", j,m,d);
        }
    else if (in>86400){
        printf("%d hari %.2d:%.2d:%.2d\n", h,j,m,d);
    }
    i++;
}
return 0;
}
