//20222220001 Fa�a um programa que leia do teclado cinco n�meros
// imprima na tela a soma destes cinco n�meros.
//O programa s� pode utilizar 2 (duas) vari�veis.

#include <stdio.h>

int main(){
int nums, soma = 0;
 for(int i = 0;i < 5; i++){
    printf("Digita um numero ai: ");
    scanf("%d", &nums);
    soma += nums;
 }

 printf("A soma deu %d\n", soma);
 return 0;
}

