#include <stdio.h>

int main() {
    int n;
    printf("Insira o numero de lancamentos: ");
    scanf("%d", &n);

    int ocorrencias[6] = {0}; // inicializar o vetor de ocorrências com 0

    int resultado;
    printf("Insira os resultados dos lancamentos: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &resultado);
        if(resultado>=1 && resultado<=6) 
        {
        ocorrencias[resultado - 1]++; // incrementar o número de ocorrências do resultado
        }
        else
        {
        printf("Valor Invalido");
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("Face %d: %d ocorrencias\n", i + 1, ocorrencias[i]);
        return 0;
}
}