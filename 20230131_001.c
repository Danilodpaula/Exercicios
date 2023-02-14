#include <stdio.h>
#include <string.h>

void imprime_inverso(char *palavra) {
    for (int i = strlen(palavra) - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
}
int eh_vogal(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void remove_vogais(char *string) {
    int i, j;
    for (i = 0, j = 0; string[i] != '\0'; i++) {
        if (!eh_vogal(string[i])) {
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';
    printf("%s\n", string);
}

void maiuscula(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 'a' + 'A';
        }
    }
    printf("%s\n", string);
}

int conta_caractere(char *string, char caractere) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            count++;
        }
    }
    return count;
}

void remove_caractere(char *string, char caractere) {
    int i, j;
    for (i = 0, j = 0; string[i] != '\0'; i++) {
        if (string[i] != caractere) {
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';
    printf("%s\n", string);
}


int main() {
    char palavra[] = "abacaxi";
    imprime_inverso(palavra);

    char string[] = "hello world";
    remove_vogais(string);

    char outra_string[] = "Hello, World!";
    maiuscula(outra_string);

    char mais_uma_string[] = "Hello, World!";
    printf("%d\n", conta_caractere(mais_uma_string, 'o'));

    char mais_uma_outra_string[] = "Hello, World!";
    remove_caractere(mais_uma_outra_string, 'o');

    return 0;
}



