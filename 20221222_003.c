#include <stdio.h>
#include <stdlib.h>
int main()
{
	int numero;
	int somapar = 0;
	int somaimpar = 0;
	do{
	
	
	printf("Digite um numero inteiro:\n");
	scanf("%i", &numero);
	if(numero<0)
	{
		break;
	}
	
	if(numero%2==0)
	{
		somapar += numero;
	}
	
	else
	{
	somaimpar += numero;
	}
	
}
	while(1);
	
		printf("soma dos pares = %d\n", somapar);
		printf("soma dos impares = %d\n", somaimpar);
	
	
	return 0;
}