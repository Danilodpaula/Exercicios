#include <stdio.h>
#include <string.h>

#define NUM_EQUIPES 5
#define TAM_NOME 50
#define MAX_NOMES 20

// Definição da estrutura que representa um aluno
typedef struct {
    char nome[TAM_NOME];
    char sobrenome[TAM_NOME];
} Aluno;

// Definição da estrutura que representa uma equipe
typedef struct {
    Aluno integrantes[4];
} Equipe;

// Função que retorna o índice da equipe que contém o aluno com o nome especificado
int buscar_equipe(Equipe equipes[], char nome[], int num_equipes) {
    for (int i = 0; i < num_equipes; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(equipes[i].integrantes[j].nome, nome) == 0) {
                return i;
            }
        }
    }
    return -1;
}

// Função que imprime a lista de nomes
void imprimir_nomes(char nomes[][TAM_NOME], int num_nomes) {
    printf("Lista de nomes:\n");
    for (int i = 0; i < num_nomes; i++) {
        printf("%s\n", nomes[i]);
    }
}

// Função que elimina um nome da lista
void remover_nome(char nomes[][TAM_NOME], int *num_nomes, char nome[]) {
    for (int i = 0; i < *num_nomes; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            for (int j = i; j < *num_nomes - 1; j++) {
                strcpy(nomes[j], nomes[j+1]);
            }
            (*num_nomes)--;
            break;
        }
    }
}

// Função que imprime os nomes da lista em ordem alfabética
void imprimir_ordem_alfabetica(char nomes[][TAM_NOME], int num_nomes) {
    char temp[TAM_NOME];
    for (int i = 0; i < num_nomes - 1; i++) {
        for (int j = i+1; j < num_nomes; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
    printf("Lista de nomes em ordem alfabética:\n");
    imprimir_nomes(nomes, num_nomes);
}

// Função que insere os nomes da lista em outra lista em ordem alfabética
void inserir_ordem_alfabetica(char nomes_origem[][TAM_NOME], int num_nomes_origem,
                              char nomes_destino[][TAM_NOME], int *num_nomes_destino) {
    for (int i = 0; i < num_nomes_origem; i++) {
        int j;
        for (j = *num_nomes_destino-1; j >= 0; j--) {
            if (strcmp(nomes_destino[j], nomes_origem[i]) < 0) {
                break;
            }
            strcpy(nomes_destino[j+1], nomes_destino[j]);
        }
        strcpy(nomes_destino[j+1], nomes_origem[i]);
        (*num_nomes_destino)++;
}
}


int main() {
// Definição das equipes
Equipe equipes[NUM_EQUIPES] = {
{{"João", "Silva"}, {"Maria", "Santos"}, {"Pedro", "Oliveira"}, {"Ana", "Ferreira"}},
{{"Carlos", "Pereira"}, {"Fernanda", "Mendes"}, {"Roberto", "Almeida"}, {"Mariana", "Rodrigues"}},
{{"José", "Gomes"}, {"Renata", "Lima"}, {"Fábio", "Sousa"}, {"Beatriz", "Costa"}},
{{"Antônio", "Araújo"}, {"Aline", "Ribeiro"}, {"Rafael", "Barbosa"}, {"Carla", "Nunes"}},
{{"Paulo", "Martins"}, {"Luciana", "Moraes"}, {"Marcelo", "Campos"}, {"Isabela", "Borges"}}
};
int indice = buscar_equipe(equipes, "Fernanda", NUM_EQUIPES);
if (indice != -1) {
    printf("Fernanda pertence à equipe %d\n", indice+1);
} else {
    printf("Não foi encontrada uma equipe com a aluna Fernanda\n");
}

// Definição da lista de nomes
char nomes[MAX_NOMES][TAM_NOME];
int num_nomes = 0;

// Leitura dos nomes inseridos pelo usuário
char nome[TAM_NOME];
printf("Digite os nomes (ou deixe em branco para terminar):\n");
do {
    fgets(nome, TAM_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de quebra de linha
    if (nome[0] != '\0') {
        strcpy(nomes[num_nomes], nome);
        num_nomes++;
    }
} while (num_nomes < MAX_NOMES && nome[0] != '\0');

// Teste da função imprimir_nomes
imprimir_nomes(nomes, num_nomes);

// Teste da função remover_nome
remover_nome(nomes, &num_nomes, "Maria");
printf("Nome removido. ");
imprimir_nomes(nomes, num_nomes);

// Teste da função imprimir_ordem_alfabetica
imprimir_ordem_alfabetica(nomes, num_nomes);

// Teste da função inserir_ordem_alfabetica
char nomes_ordenados[MAX_NOMES][TAM_NOME];
int num_nomes_ordenados = 0;
inserir_ordem_alfabetica(nomes, num_nomes, nomes_ordenados, &num_nomes_ordenados);
printf("Nomes inseridos em outra lista em ordem alfabética. ");
imprimir_nomes(nomes_ordenados, num_nomes_ordenados);

return 0;
}