#include<stdio.h>

int main()
{
    float altura = 0;
    float peso = 0;

    printf("Insira a sua altura: ");
    scanf("%f", &altura);

    peso =  (72.7 * altura) - 58;

    printf("\Seu peso ideal é = %.2f\n", peso);

    return 0;
}