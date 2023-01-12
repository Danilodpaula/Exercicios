// 20222220004 Construa um algoritmo que leia um conjunto de 20 números inteiros e
// mostre qual foi o maior e o menor valor fornecido.

#include <stdio.h>

int main(){
	
int numero[5];
int maior, menor, i;

for(int i=0;i<5;i++){
	printf("Digite os numeros inteiros: ");
	scanf("%d", &numero[i]);	
}
	
maior = numero[0];
menor = numero[0];

for(i=1; i<5; i++){
	
	if(numero[i] > maior){
		maior = numero[i];
	}
	
	if (numero[i] < menor){
		menor = numero[i];
	}
}

	printf("Maior numero =  %d \n", maior);
	printf("Menor numero =  %d \n", menor);
	
	return 0;
}
