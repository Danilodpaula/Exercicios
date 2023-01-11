//20222220002 Escreva um algoritmo que lê 50 números inteiros e em seguida mostra
//a soma de todos os ímpares lidos.

#include <stdio.h>
int main(){
 int numeros, impares, soma_impares = 0;

 for(int i=0;i<50;i++){
    printf("Digite varios e varios numeros(um por vez): ");
    scanf("%d", &numeros);

    if(numeros%2!=0){
        soma_impares += numeros;
    }
 }

 printf("Mary, a porra da soma deu %d\n", soma_impares);
 return 0;
}
