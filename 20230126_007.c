#include <stdio.h>

int calcular_custo(int itinerario[], int tamanho, int matriz_custos[][4]) {
    int custo_total = 0;
    for (int i = 0; i < tamanho - 1; i++) {
        int cidade_atual = itinerario[i];
        int proxima_cidade = itinerario[i+1];
        int custo = matriz_custos[cidade_atual][proxima_cidade];
        custo_total += custo;
    }
    return custo_total;
}

int main() {
    int matriz_custos[4][4] = {{4, 1, 2, 3},
                               {5, 2, 1, 400},
                               {2, 1, 3, 8},
                               {7, 1, 2, 5}};
    int itinerario[8] = {0, 3, 1, 3, 3, 2, 1, 0};
    int tamanho = sizeof(itinerario) / sizeof(itinerario[0]);

    int custo_total = calcular_custo(itinerario, tamanho, matriz_custos);

    printf("Custo total: %d\n", custo_total);
    return 0;
}
