//20222220005 Altere o programa anterior para que
//ele não permita a entrada de valores negativos.

#include <stdio.h>

int main(){
    int numero[20];
    int maior, menor, i;
    	
        for(int i=0;i<20;i++){
        	
        	do{
            printf("Digite os numeros inteiros: ");
            scanf("%d", &numero[i]);
        }
    
        while(numero[i] < 0);
    }
		
		maior = numero[0];
        menor = numero[0];
        
        for(i=1; i<20; i++){
		 
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