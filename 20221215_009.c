#include<stdio.h>

int main()
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float conta1 = 0;
    float conta2 = 0;
    float conta3 = 0;

    printf("Insira um numero inteiro: ");
    scanf("%f", &num1);

    printf("Insira um segundo inteiro: ");
    scanf("%f", &num2);

    printf("Insira um numero real: ");  
    scanf("%f", &num3);

    conta1 = (2 * num1)*(num2/2);
    conta2 = (3*num1) + num3;
    conta3 = num3 * num3 * num3;

    printf("\O produto do dobro do primeiro com metade do segundo = %.2f\n ", conta1);
    printf("\A soma do triplo do primeiro com o terceiro = %.2f\n ", conta2);
    printf("\O terceiro elevado ao cubo = %.2f\n ", conta3);

    return 0;
}