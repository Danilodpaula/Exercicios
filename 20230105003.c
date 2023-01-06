#include <stdio.h>

int ler_numero_par() {
    int num;
    do {
        printf("Insira um numero inteiro par: ");
        scanf("%d", &num);
    } while (num % 2 != 0);
    return num;
}

int verificar_perfeito(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma == num;
}

int main() {
    int num = ler_numero_par();
    if (verificar_perfeito(num)) {
        printf("O numero %d e perfeito\n", num);
    } else {
        printf("O numero %d nao e perfeito\n", num);
    }
    return 0;
}