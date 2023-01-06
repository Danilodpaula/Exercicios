#include <stdio.h>

int fat(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
    printf("O fatorial de %d e %d\n", n, fat(n));
    return 0;
}
