#include <stdio.h>
#include<stdlib.h>

int main (void){
    float valorconta, gorgeta;
    printf("Valor da conta: ");
    scanf("%f", &valorconta);
    gorgeta = (valorconta/10);
    printf("Total da Gorgeta: %.2f. \n", gorgeta);
    system("pause");
    return 0;
}