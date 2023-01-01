#include<stdio.h>
int main()
{
 int numero, guarda_maior, guarda_menor;
 int i;

 printf("Escreva com o 1o numero inteiro: ");
 scanf("%i", &numero);

 guarda_maior=numero;
 guarda_menor=numero;

 for(i=1; i<15; i++)
 {
 printf("\nEscreva com o %do numero inteiro: ",i+1);
 scanf("%i", &numero);

 if(numero>guarda_maior)
 {
 	guarda_maior=numero;
 }
 
 else
 {
 
 	 guarda_menor=numero;
 	
 }
 
 }


printf("\nO menor numero entrado e: %d",guarda_menor);
printf("\nO maior numero entrado e: %d",guarda_maior);
	
   return 0;
}