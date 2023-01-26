#include <stdio.h>

void imprime_inverso(int seq[], int n) {
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", seq[i]);
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
    printf("Sequencia invertida: ");
    imprime_inverso(seq, n);
    return 0;
}