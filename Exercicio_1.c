#include <stdio.h>
#include <stdlib.h>

int main (void){
    float area, base, altura;
    printf("Valor da base: ");
    scanf("%f", &base);
    printf("Valor da altura: ");
    scanf("%f", &altura);
    area = (base * altura)/2;
    printf("Valor da area: %.2f. \n", area);
    system("pause");
    return 0;
}
