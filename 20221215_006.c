#include<stdio.h>

int main(){
    float dhora = 0;
    float mes = 0;
    float sal = 0;

    printf("Informe quanto voce ganha por hora: ");
    scanf("%f", &dhora);

    printf("Quantas horas trabalhou no mes?: ");
    scanf("%f", &mes);

    sal = dhora * mes;
    printf("\Seu salario = %.2f\n ", sal);

    return 0;
}
