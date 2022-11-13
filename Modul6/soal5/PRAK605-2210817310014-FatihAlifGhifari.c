#include<stdio.h> 
void biodata(int tahun_lahir, char A[10], char B[20]){
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n", A);
    printf("Umur Saya : %d\n", tahun_sekarang - tahun_lahir);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya Dari : %s",B);
}

int main (){
    int tahun_lahir;
    char A[10], B[20];
    scanf(" %d", &tahun_lahir);
    scanf(" %[^\n]%*c", &A);
    scanf(" %[^\n]%*c", &B);
    biodata(tahun_lahir, A, B);     
    return 0;
}