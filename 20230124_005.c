#include <stdio.h>

void calcular_fatorial(int seq[], int n) {
    for (int i = 0; i < n; i++) {
        int fatorial = 1;
        for (int j = 1; j <= seq[i]; j++) {
            fatorial *= j;
        }
        seq[i] = fatorial;
    }
}

int main() {
    int n;
    printf("Insira o tamanho da sequencia: ");
    scanf("%d", &n);
    int seq[n];
    printf("Insira a sequencia: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &seq[i]);
    }
    calcular_fatorial(seq, n);
    printf("Sequencia com os fatoriais dos numeros: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", seq[i]);
    }
    return 0;
}
