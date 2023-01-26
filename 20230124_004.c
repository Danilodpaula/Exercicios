#include <stdio.h>

int filtrar_pares(int seq[], int n, int seq_pares[]) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (seq[i] % 2 == 0) {
            seq_pares[j++] = seq[i];
        }
    }
    return j;
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
    int seq_pares[n]; // array para guardar os números pares
    int n_pares = filtrar_pares(seq, n, seq_pares);
    printf("Sequencia com somente numeros pares: ");
    for (int i = 0; i < n_pares; i++) {
        printf("%d ",seq_pares[i]);
}
return 0;
}
