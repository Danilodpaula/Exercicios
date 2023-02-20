#include <stdio.h>
#include <stdlib.h>

struct jogador {
    char nome[50];
    int funcao; // 3-Goleiro, 7-Defensa, 8-Médio Campo, 5-Atacante
    int avaliacao; // de 0 a 10
};

int main() {
    // Inicializar as estruturas com os dados de uma equipe
    struct jogador time[23] = {
        {"Diego Alves", 3, 8},
        {"Gabriel Batista", 3, 5},
        {"Hugo Souza", 3, 7},
        {"Matheuzinho", 7, 6},
        {"Mauricio Isla", 7, 7},
        {"Filipe Luis", 7, 7},
        {"Rodinei", 7, 5},
        {"Bruno Viana", 7, 6},
        {"Gustavo Henrique", 7, 6},
        {"Leo Pereira", 7, 6},
        {"Willian Arao", 8, 7},
        {"Gerson", 8, 8},
        {"Thiago Maia", 8, 6},
        {"Diego", 8, 7},
        {"De Arrascaeta", 8, 8},
        {"Max", 8, 5},
        {"Gabigol", 5, 9},
        {"Everton Ribeiro", 5, 7},
        {"Pepe", 5, 6},
        {"Vitinho", 5, 6},
        {"Michael", 5, 6},
        {"Pedro", 5, 8},
        {"Bruno Henrique", 5, 8}
    };

    // Ordenar o time em ordem decrescente de avaliação
    for (int i = 0; i < 23; i++) {
        for (int j = i+1; j < 23; j++) {
            if (time[i].avaliacao < time[j].avaliacao) {
                struct jogador temp = time[i];
                time[i] = time[j];
                time[j] = temp;
            }
        }
    }

    // Selecionar os jogadores para a formação
    struct jogador formacao[11] = {};
    int indice = 0;
    for (int i = 0; i < 23 && indice < 11; i++) {
        if (time[i].funcao == 3 && indice < 1) { // 1 goleiro
            formacao[indice] = time[i];
            indice++;
        } else if (time[i].funcao == 7 && indice < 5) { // 4 defesas
            formacao[indice] = time[i];
            indice++;
        } else if (time[i].funcao == 8 && indice < 9) { // 4 meio-campistas
            formacao[indice] = time[i];
            indice++;
        } else if (time[i].funcao == 5 && indice < 11) { // 2 atacantes
            formacao[indice] = time[i];
            indice++;
        }
    }

    // Imprimir a formação
printf("Formacao:\n");
printf("1 - %s (Goleiro)\n", formacao[0].nome);

int num_defesas = 0;
int num_meio_campo = 0;
int num_atacantes = 0;

for (int i = 1; i < 11; i++) {
    if (i <= 4) {
        printf("%d - %s (Defesa)\n", i+1, formacao[i].nome);
    } else if (i <= 8) {
        printf("%d - %s (Meio-Campo)\n", i+1, formacao[i].nome);
    } else {
        printf("%d - %s (Ataque)\n", i+1, formacao[i].nome);
    }
}

	return 0;
}

