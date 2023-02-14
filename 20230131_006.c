#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char original[MAX_SIZE + 1];
    char reversa[MAX_SIZE + 1];
    int i, j;

    printf("Digite a string: ");
    fgets(original, MAX_SIZE, stdin);

    // Remove o caractere de quebra de linha no final da string
    original[strcspn(original, "\n")] = '\0';

    // Remove os espaços em branco e converte para letras minúsculas
    for (i = 0, j = 0; i < strlen(original); i++) {
        if (!isspace(original[i])) {
            reversa[j++] = tolower(original[i]);
        }
    }
    reversa[j] = '\0';

    // Verifica se a string reversa é igual à original
    for (i = 0, j = strlen(reversa) - 1; i < j; i++, j--) {
        if (reversa[i] != reversa[j]) {
            printf("A string nao e um palindromo.\n");
            return 0;
        }
    }

    printf("A string e um palindromo.\n");

    return 0;
}
