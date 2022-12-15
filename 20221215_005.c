#include<stdio.h>

int main(){
    float lado = 0;
    float area = 0;
    float area2 = 0;

    printf("Escreva o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    area2 = area * 2;
    printf("\Area = %.2f\n ", area2);

    return 0;
}
