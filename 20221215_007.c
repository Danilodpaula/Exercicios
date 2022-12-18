#include<stdio.h>

int main()
{
    float tempf = 0;
    float tempc = 0;

    printf("Insira a temperatura em Farenheint: ");
    scanf("%f", &tempf);

    tempc = (5 * (tempf-32) / 9);

    printf("\Tempertura = %.2fC\n ", tempc);

    return 0;
}