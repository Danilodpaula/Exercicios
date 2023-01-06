#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
    printf("O numero de Fibonacci na posicao %d e %d\n", n, fib(n));
    return 0;
}
