#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void acrescenta_ponto_para_alunas(float notas[][6], char sexo[][6], int equipe);
void adiciona_aluno(char nomes[][6][50], char sexo[][6], float notas[][6], int equipe);

int main() {
    char nomes[2][6][50] = {
        {"Joao", "Maria", "Jose", "Ana", "Pedro", "Luiza"},
        {"Lucas", "Carla", "Marcos", "Julia", "Rafael", "Beatriz"}
    };
    char sexo[2][6] = {
        {'M', 'F', 'M', 'F', 'M', 'F'},
        {'M', 'F', 'M', 'F', 'M', 'F'}
    };
    float notas[2][6] = {
        {7.5, 9.0, 5.0, 8.5, 6.0, 7.0},
        {8.0, 6.5, 7.0, 9.5, 8.0, 5.5}
    };

    // Letra c)
    int num_mulheres[2] = {0, 0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (sexo[i][j] == 'F') {
                num_mulheres[i]++;
            }
        }
    }
    if (num_mulheres[0] > num_mulheres[1]) {
        printf("A equipe 1 tem mais mulheres.\n");
    } else if (num_mulheres[1] > num_mulheres[0]) {
        printf("A equipe 2 tem mais mulheres.\n");
    } else {
        printf("As equipes tem o mesmo número de mulheres.\n");
    }

    // Letra d)
    char alunas_selecionadas[12][50];
    int num_alunas_selecionadas = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (sexo[i][j] == 'F' && notas[i][j] >= 8.0) {
                strcpy(alunas_selecionadas[num_alunas_selecionadas], nomes[i][j]);
                num_alunas_selecionadas++;
            }
        }
    }

    // Letra e)
    printf("Alunas que podem participar do projeto:\n");
    for (int i = 0; i < num_alunas_selecionadas; i++) {
        printf("%s\n", alunas_selecionadas[i]);
    }

    // Letra f)
    acrescenta_ponto_para_alunas(notas, sexo, 1);

    // Letra g)
    adiciona_aluno(nomes, sexo, notas, 0);

    return 0;
}

void acrescenta_ponto_para_alunas(float notas[][6], char sexo[][6], int equipe) {
    for (int i = 0; i < 6; i++) {
        if (sexo[equipe][i] == 'F') {
            notas[equipe][i]++;
        }
    }
}

void adiciona_aluno(char nomes[][6][50], char sexo[][6], float notas[][6], int equipe) {
printf("Digite o nome do aluno:\n");
char nome[50];
scanf("%s", nome);
printf("Digite o sexo do aluno (M ou F):\n");
char sx;
scanf(" %c", &sx);
printf("Digite a nota do aluno:\n");
float nota;
scanf("%f", &nota);
int index = -1;
for (int i = 0; i < 6; i++) {
    if (strlen(nomes[equipe][i]) == 0) {
        index = i;
        break;
    }
}

if (index == -1) {
    printf("Não foi possível adicionar o aluno, equipe cheia.\n");
} else {
    strcpy(nomes[equipe][index], nome);
    sexo[equipe][index] = sx;
    notas[equipe][index] = nota;
}
}
