#include <stdio.h>
#include <string.h>

int is_segment(int x, int y) {
    char x_str[20], y_str[20];
    sprintf(x_str, "%d", x);
    sprintf(y_str, "%d", y);
    return strstr(y_str, x_str) != NULL;
}

int main() {
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);

    if (is_segment(x, y)) {
        printf("x e um segmento de y\n");
    } else {
        printf("x nao e um segmento de y\n");
    }
    return 0;
}
