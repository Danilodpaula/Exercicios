#include<stdio.h>

int main(){
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float num4 = 0;
    float media = 0;
    printf("Escreva sua primeira nota: ");
    scanf("%f", &num1);

    printf("Escreva sua segunda nota: ");
    scanf("%f", &num2);

    printf("Escreva sua terceira nota: ");
    scanf("%f", &num3);

    printf("Escreva sua última nota: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4)/4;
    printf("\Sua media foi = %.1f\n ", media);

    return 0;
}
