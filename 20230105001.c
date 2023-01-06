#include <stdio.h>
#include <stdlib.h>

int scanIntIntervalo(int min, int max) {
    int num;
    do {
        printf("Insira um numero inteiro entre %d e %d: ", min, max);
        scanf("%d", &num);
    } while (num < min || num > max);
    return num;
}

double percentual(double valor, double total) {
    return 100 * valor / total;
}

double absdif(double a, double b) {
    return a > b ? a - b : b - a;
}

int main() {
    int x = scanIntIntervalo(0, 1000);
    int y = scanIntIntervalo(0, 1000);
    int maior = x > y ? x : y;
    int menor = x < y ? x : y;
    printf("O percentual do menor em relacao ao maior e %.2f%%\n", percentual(menor, maior));
    printf("O modulo da diferenca entre o maior e o menor e %.2f\n", absdif(maior, menor));
    return 0;
}
