#include <stdio.h>
#include<stdlib.h>

int main (void){
    float salbase, salnovo;
    printf("Valor do salario: ");
    scanf("%f", &salbase);
    salnovo = (salbase/10)+salbase;
    printf("Valor do novo salario: %.2f. \n", salnovo);
    system("pause");
    return 0;
}