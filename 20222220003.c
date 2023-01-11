//20222220003 Altere o algoritmo anterior para que ele considere apenas
//a soma dos ímpares que estejam entre 100 e 200.

#include <stdio.h>

int main(){
 int numeros, impares, soma_impares = 0;

 for(int i=0;i<2;i++){
    printf("Digite varios e varios numeros(um por vez): ");
    scanf("%d", &numeros);
    if(numeros%2!=0 && numeros >= 100 && numeros<= 200){
    soma_impares += numeros;
                }
        }


 printf("A soma deu %d\n", soma_impares);
 return 0;
}


