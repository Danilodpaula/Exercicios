#include<stdio.h>

int main()
{
    float salbru = 0;
    float imposr = 0;
    float INSS = 0;
    float sind = 0;
    float sali = 0;
    float hora = 0;
    float horam = 0;

    printf("Insira quanto voce ganha por hora: ");
    scanf("%f", &hora);

    printf("Insira o o numero de horas trabalhadas no mes: ");
    scanf("%f", &horam);

    salbru =  (hora * horam);
    imposr =  (salbru/100) * 11;
    INSS =  (salbru/100) * 8;
    sind =  (salbru/100) * 5;
    sali =  salbru - sind - INSS - imposr;

    printf("\Seu salario bruto e = %.2f\n", salbru);
    printf("\Quanto voce pagou ao INSS = %.2f\n", INSS);
    printf("\Quanto voce pagou ao sindicato = %.2f\n", sind);
    printf("\Seu salario líquido e = %.2f\n", sali);

    return 0;
}