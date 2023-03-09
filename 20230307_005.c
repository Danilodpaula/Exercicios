#include <stdio.h>

int testa_igualdade(int a, int b, int c) {
    if (a == b && b == c) {
        return 1;
    }
    else {
        return 0;
    }
}

void ordena_tres_valores(int *a, int *b, int *c) {
    int num[3] = {*a, *b, *c};
    int i, j, *menor, temp;
    for(i = 0; i < 3 - 1; i++){
        menor = num + i;
        for(j = i + 1; j < 3; j++){
            if(*(num + j) < *menor){
                menor = num + j;
            }
        }
        temp = *(num + i);
        *(num + i) = *menor;
        *menor = temp;
    }
    *a = num[0];
    *b = num[1];
    *c = num[2];
}

int main() {
    int a, b, c, iguais;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    iguais = testa_igualdade(a, b, c);
    ordena_tres_valores(&a, &b, &c);
    if (iguais == 1) {
        printf("Os valores sao iguais.\n");
    }
    else {
        printf("Os valores ordenados sao: %d, %d e %d.\n", a, b, c);
    }
    return 0;
}
