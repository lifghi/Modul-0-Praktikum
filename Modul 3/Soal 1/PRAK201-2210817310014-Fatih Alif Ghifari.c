#include <stdio.h>

int main ()
{
    char nm[90],nim[90],kp[200],ttl[300],al[200],hb[200],nhp[30000];
    printf("Nama                    :");
    gets(nm);
    printf("NIM                     :");
    gets(nim);
    printf("Kelas Paralel           :");
    gets(kp);
    printf("Tempat Tanggal Lahir    :");
    gets(ttl);
    printf("Alamat                  :");
    gets(al);
    printf("Hobby                   :");
    gets(hb);
    printf("No. Hp                  :");
    gets(nhp);
    printf("\n\nNama                    : %s", nm);
    printf("\nNIM                     : %s", nim);
    printf("\nKelas Paralel           : %s", kp);
    printf("\nTempat Tanggal Lahir    : %s", ttl);
    printf("\nAlamat                  : %s", al);
    printf("\nHobby                   : %s", hb);
    printf("\nNo. Hp                  : %s", nhp);
    return 0;
}
