#include <stdio.h>

int conta_digito(int n, int d) {
    int conta = 0;
    while (n > 0) {
        if(n % 10 == d) {
            conta++;
        }
        n /= 10;
    }
    return conta;
}

int verifica_permutacao(int a, int b) {
    int digito_count_a[10] = {0};
    int digito_count_b[10] = {0};
    int i;
    while(a > 0) {
        int digito = a % 10;
        digito_count_a[digito]++;
        a /= 10;
    }
    while(b > 0) {
        int digito = b % 10;
        digito_count_b[digito]++;
        b /= 10;
    }
    for(i = 0; i < 10; i++) {
        if(digito_count_a[i] != digito_count_b[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    if(verifica_permutacao(a, b)) {
        printf("a e uma permutacao de b\n");
    } else {
        printf("a nao e uma permutacao de b\n");
    }
    return 0;
}

