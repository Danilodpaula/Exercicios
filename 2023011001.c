#include <stdio.h>

//devolve quantas vezes o dígito d aparece em n

int conta_digito(int n, int d) {	
    int conta = 0;
    while (n > 0) {
	if(n % 10 == d) {
            conta++;
        }
        n /= 10;
    }
    printf("n se repete %d vezes em %d\n", conta, d);
    return conta;
}

int main(){
	
	int n, d;
	printf("Digite n: ");
	scanf("%d", &n);
	
	printf("Digite d: ");
	scanf("%d", &d);
	
	conta_digito(n,d);
	return 0;
}