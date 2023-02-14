#include <stdio.h>
#include <string.h>

#define MAX_MODELS 5
#define MAX_MODEL_NAME 20

int main() {
    char modelos[MAX_MODELS][MAX_MODEL_NAME];
    float consumos[MAX_MODELS];

    // preenche a matriz de modelos e o vetor de consumos
    for (int i = 0; i < MAX_MODELS; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        scanf("%s", modelos[i]);
        printf("Digite o consumo do carro %d (km/L): ", i+1);
        scanf("%f", &consumos[i]);
    }

    // encontra o modelo mais econômico
    int modelo_mais_economico = 0;
    for (int i = 1; i < MAX_MODELS; i++) {
        if (consumos[i] > consumos[modelo_mais_economico]) {
            modelo_mais_economico = i;
        }
    }

    // imprime o modelo mais econômico
    printf("O modelo mais econômico é: %s\n", modelos[modelo_mais_economico]);

    // calcula quantos litros cada carro consome para percorrer 1000km
    float litros[MAX_MODELS];
    for (int i = 0; i < MAX_MODELS; i++) {
        litros[i] = 1000.0 / consumos[i];
    }

    // imprime a quantidade de litros para percorrer 1000km de cada carro
    printf("Quantidade de litros para percorrer 1000km:\n");
    for (int i = 0; i < MAX_MODELS; i++) {
        printf("%s: %.2f\n", modelos[i], litros[i]);
    }

    return 0;
}
