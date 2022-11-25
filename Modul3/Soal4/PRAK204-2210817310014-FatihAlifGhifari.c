#include <stdio.h>

int main()
{
    float jj,tb,phi,v,l,k;
    phi=22/7.f;
    scanf("%f %f", &jj,&tb);
    v=phi*jj*jj*tb;
    l=(2*phi*jj*(jj+tb));
    k=(2*phi*jj);
    printf("Volume = %.2f\n",v);
    printf("Luas = %.2f\n",l);
    printf("Keliling = %.2f", k);
    return 0;
}
