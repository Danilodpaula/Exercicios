#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char original[MAX_SIZE + 1];
    char codificado[MAX_SIZE + 1];
    int deslocamento = 3;
    int i;

    printf("Digite a string a ser codificada: ");
    fgets(original, MAX_SIZE, stdin);

    for (i = 0; i < strlen(original); i++) {
        if (original[i] >= 'A' && original[i] <= 'Z') {
            codificado[i] = 'A' + ((original[i] - 'A' + deslocamento) % 26);
        } else if (original[i] >= 'a' && original[i] <= 'z') {
            codificado[i] = 'a' + ((original[i] - 'a' + deslocamento) % 26);
        } else {
            codificado[i] = original[i];
        }
    }

    printf("String codificada: %s\n", codificado);

    return 0;
}
