//20222220001 Faça um programa que leia do teclado cinco números
// imprima na tela a soma destes cinco números.
//O programa só pode utilizar 2 (duas) variáveis.

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

