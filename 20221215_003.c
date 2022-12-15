#include<stdio.h>

int main(){
    float num1 = 0;
    float cent = 0;

    printf("Valor da medida em metros: ");
    scanf("%f", &num1);

    cent = num1 * 100;
    printf("\%.2f cm\n ", cent);

    return 0;
}
