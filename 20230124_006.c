#include <stdio.h>

void selection_sort(int seq[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (seq[j] < seq[min_idx]) {
                min_idx = j;
            }
        }
        int temp = seq[min_idx];
        seq[min_idx] = seq[i];
        seq[i] = temp;
    }
}

int main() {
    int n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    int seq[n];
    printf("Insira os elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &seq[i]);
    }
    selection_sort(seq, n);
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
	printf("%d ", seq[i]);
}
return 0;
}