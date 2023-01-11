#include <stdio.h>

void decimal_para_binario(int decimal) {
    int binario[100], i = 0;
    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("equivalente binario e: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);
    decimal_para_binario(decimal);
    return 0;
}
