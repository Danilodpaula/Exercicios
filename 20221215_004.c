#include<stdio.h>

int main(){
    float rcirc = 0;
    float area = 0;

    printf("Valor do raio do circulo: ");
    scanf("%f", &rcirc);

    area = rcirc * rcirc * 3.14 ;
    printf("\Area = %.2f\n ", area);

    return 0;
}
