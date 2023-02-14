#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

int main() {
    char s1[MAX_SIZE + 1], s2[MAX_SIZE + 1];
    int option;

    do {
        printf("Escolha uma opção:\n");
        printf("(1) Ler uma string S1 (tamanho máximo 20 caracteres)\n");
        printf("(2) Imprimir o tamanho da string S1\n");
        printf("(3) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação\n");
        printf("(4) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação\n");
        printf("(5) Imprimir a string S1 de forma reversa\n");
        printf("(6) Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("(7) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2\n");
        printf("(8) Verificar se uma string S2 é substring de S1\n");
        printf("(9) Retornar uma substring da string S1\n");
        printf("(0) Sair\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Digite uma string S1 (tamanho máximo 20 caracteres): ");
                scanf("%s", s1);
                break;
            case 2:
                printf("Tamanho da string S1: %ld\n", strlen(s1));
                break;
            case 3:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                if (strcmp(s1, s2) == 0) {
                    printf("As strings são iguais.\n");
                } else {
                    printf("As strings são diferentes.\n");
                }
                break;
            case 4:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                strcat(s1, s2);
                printf("Strings concatenadas: %s\n", s1);
                break;
            case 5:
                printf("String S1 invertida: ");
                for (int i = strlen(s1) - 1; i >= 0; i--) {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;
            case 6:
                {
                    char c;
                    int count = 0;
                    printf("Digite um caractere: ");
                    scanf(" %c", &c);
                    for (int i = 0; i < strlen(s1); i++) {
                        if (s1[i] == c) {
                            count++;
                        }
                    }
                    printf("O caractere %c aparece %d vezes na string S1.\n", c, count);
                }
                break;
            case 7:
                {
                    char c1, c2;
                    printf("Digite o caractere a ser substituído: ");
                    scanf(" %c", &c1);
                    printf("Digite o caractere de substituição: ");
                    scanf(" %c", &c2);
                    char *p = strchr(s1, c1);
                    if (p != NULL) {
                        *p = c2;
                        printf("Primeira ocorrência do caractere %c substituída por %c: %s\n", c1, c2, s1);
                    } else
                {
                    printf("O caractere %c não foi encontrado na string S1.\n", c1);
                }
            }
            break;
        case 8:
            printf("Digite uma string S2: ");
            scanf("%s", s2);
            if (strstr(s1, s2) != NULL) {
                printf("A string S2 é substring de S1.\n");
            } else {
                printf("A string S2 não é substring de S1.\n");
            }
            break;
        case 9:
            {
                int start, size;
                printf("Digite a posição de início da substring (0 a %ld): ", strlen(s1) - 1);
                scanf("%d", &start);
                printf("Digite o tamanho da substring (0 a %ld): ", strlen(s1) - start);
                scanf("%d", &size);
                char substring[MAX_SIZE + 1];
                strncpy(substring, s1 + start, size);
                substring[size] = '\0';
                printf("Substring de S1: %s\n", substring);
            }
            break;
        case 0:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }
} while (option != 0);

return 0;
}
