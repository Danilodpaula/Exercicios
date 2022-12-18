#include<stdio.h>

int main()
{
    float tempf = 0;
    float tempc = 0;

    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &tempc);

    tempf = (tempc * 9/5) + 32;

    printf("\Tempertura = %.2f°F\n ", tempf);

    return 0;
}
