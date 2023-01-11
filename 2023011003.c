#include <stdio.h>
#include <math.h>

int verifica_ultimos_digitos(int x, int y, int n) {
    int x_digitos = (int) log10(x) + 1; 
    int y_digitos = (int) log10(y) + 1;

    // verifica se y tem mais dígitos do que o número de dígitos que queremos comparar
    if (y_digitos > n) {
        return 0;
    }

    int ultimos_digitos_de_x = x % (int) pow(10, n);
    return ultimos_digitos_de_x == y;
}

int main() {
    int x, y, n;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    printf("Digite n: ");
    scanf("%d", &n);

    if (verifica_ultimos_digitos(x, y, n)) {
        printf("Os ultimos %d digitos de x correspondem a y\n", n);
    } else {
        printf("Os ultimos %d digitos de x nao correspondem a y\n", n);
    }
    return 0;
}
