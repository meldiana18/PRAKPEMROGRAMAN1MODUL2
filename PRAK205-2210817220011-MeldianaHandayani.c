#include <stdio.h>
#include <math.h>
 int main (){
    int A,B,Alas,Keliling,Luas;
    scanf("%d", &A);
    scanf("%d", &B);
    Alas= sqrt(pow(B,2)-pow(A,2));
    Keliling= Alas+A+B;
    Luas= 0.5* Alas*A;
    printf("Alas = %d cm\n", Alas);
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm^2\n", Luas);
 }