#include<stdio.h>
 
 
int main()
{
 
float dividendo = 1, resultado = 0;
 
for (float divisor = 1; dividendo <= 50; dividendo++, divisor + 2){
   resultado += dividendo/divisor;
}
 
printf("O resultado da soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 e = %.2f", resultado);
 
return 0;
}