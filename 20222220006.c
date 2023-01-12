//20222220006 Faça um programa para imprimir
// a tabuada de 1 a 9 utilizando laços de repetição.

#include <stdio.h>

int main(){
	
int a, b;

	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
			printf("%d x %d = %d\n", a, b, a * b);
		}
		printf("\n");
	}
	
	return 0;
}