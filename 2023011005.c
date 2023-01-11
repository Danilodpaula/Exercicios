#include <stdio.h>

int binario_para_decimal(int binario) {
    int decimal = 0;
    int potencia = 0;
    while (binario) {
        int ultimo_digito = binario % 10;
        decimal += ultimo_digito * (1 << potencia);
        binario /= 10;
        potencia++;
    }
    return decimal;
}

int main() {
    int binario;
    printf("Digite um numero binario: ");
    scanf("%d", &binario);
    int decimal = binario_para_decimal(binario);
    printf("O numero decimal e: %d\n", decimal);
    return 0;
}
