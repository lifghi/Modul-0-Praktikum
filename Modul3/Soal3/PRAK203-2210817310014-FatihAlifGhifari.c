#include <stdio.h>

int main()
{
    float a,b,i,j,x,y,h;
    scanf("%f %f %f %f %f %f",&a,&b,&i,&j,&x,&y);
    h=(a-b)*(i/j)-(x+y);
    printf("%.3f", h);
    return 0;
}
