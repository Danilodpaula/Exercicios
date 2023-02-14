#include <stdio.h>
#include <string.h>

#define NUM_EQUIPES 5
#define TAM_NOME 50

int main() {
    // Definindo as equipes e seus integrantes
    char equipes[NUM_EQUIPES][4][TAM_NOME] = {
        { "Joao Silva", "Maria Souza", "Pedro Costa", "Ana Santos" },
        { "Marcos Oliveira", "Lucas Mendes", "Mariana Lima", "Carla Nunes" },
        { "Felipe Castro", "Luana Pereira", "Ricardo Rodrigues", "Vivian Almeida" },
        { "Bruno Santos", "Camila Costa", "Marcela Castro", "Roberto Oliveira" },
        { "Julia Mendes", "Diego Silva", "Andressa Oliveira", "Lucas Pereira" }
    };

    char nome[TAM_NOME];
    int equipe = -1;
    int i, j;

    printf("Digite o nome do aluno: ");
    fgets(nome, TAM_NOME, stdin);

    // Remove o caractere de quebra de linha no final da string
    nome[strcspn(nome, "\n")] = '\0';

    // Busca o nome na lista de integrantes de cada equipe
    for (i = 0; i < NUM_EQUIPES; i++) {
        for (j = 0; j < 4; j++) {
            if (strcmp(nome, equipes[i][j]) == 0) {
                equipe = i;
                break;
            }
        }
        if (equipe != -1) {
            break;
        }
    }

    // Imprime o resultado
    if (equipe == -1) {
        printf("Nao foi possivel encontrar o aluno.\n");
    } else {
        printf("O aluno %s faz parte da equipe %d.\n", nome, equipe+1);
    }

    return 0;
}
