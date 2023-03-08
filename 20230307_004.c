#include <stdio.h>
#include <stdio.h>
#define NULL 0

//Crie um programa que contenha um array de inteiros
//contendo 8 elementos. Utilizando apenas aritmética de ponteiros,
//leia esse array do teclado e imprima o dobro de cada valor lido.
//a)Imprimir o endereço das posições contendo valores pare

int main(){
    int num[8] = {2,24,25,27,26,3,6,8};
    int *ptr;

    printf("Os enderecos dos valores do vetor:\n");

        for(ptr = &num[0];ptr < &num[8]; ptr++){
        printf("%d, ", *ptr);
        }

    printf("\n");
    printf("Os enderecos dos valores dobrados:\n");

    for(ptr = &num[0];ptr < &num[8]; ptr++){
        printf("%d, ", *ptr * 2);
    }

    printf("\n");
    printf("Os enderecos dos valores pares:\n");

    for(ptr = &num[0];ptr < &num[8]; ptr++){
        if(*ptr % 2 == 0){
        printf("%d, ", *ptr);
    }
}
    return 0;
}
