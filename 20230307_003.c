#include <stdio.h>
#include <stdio.h>
#define NULL 0

//Escreva um programa que declare um inteiro,
//um real e um char, e ponteiros para inteiro, real e char.
//Associe as vari�veis aos ponteiros (use &).
//Modifique os valores de cada vari�vel usando os ponteiros.
//Imprima os valores das vari�veis antes e ap�s a modifica��o.

int main(){
    int x = 1, *ptr_x;
    float y = 1.12, *ptr_y;
    char z = 'x', *ptr_z;

    ptr_x = &x;
    ptr_y = &y;
    ptr_z = &z;

    printf("Valor das variaveis sem modificac�o\n");
    printf("\n");
    printf("Valor do inteiro: %d\n", x);
    printf("Valor do real: %f\n", y);
    printf("O caractere: %c\n", z);

    *ptr_x = 2;
    *ptr_y = 4.67;
    *ptr_z = 's';

    printf("\n");
    printf("Valor das variaveis com modificac�o\n");
    printf("\n");
    printf("Valor do inteiro (modificado): %d\n", *ptr_x);
    printf("Valor do real (modificado): %f\n", *ptr_y);
    printf("O caractere (modificado): %c\n", *ptr_z);

    return 0;
}
