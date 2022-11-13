#include<stdio.h> 
int reverse(int angka){
    int reverse = 0;
    while(angka!=0){     
        reverse = reverse * 10;
        reverse = reverse + angka%10;
        angka = angka/10;
    }
    return reverse;
}

int main(){
    int A,B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A+B; 
    printf("%d", reverse(C));
}