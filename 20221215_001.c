#include<stdio.h>

int main(){
    float num1 = 0;
    float num2 = 0;
    float soma = 0;
    printf("escreva um numero: ");
    scanf("%f", &num1);

    printf("escreva um  segundo numero: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    printf("\Soma de %.0f e %.0f = %.1f\n ", num1,num2,soma);

    return 0;
}
