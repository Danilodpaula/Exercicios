#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char data[11];
  int dia, mes, ano, i;

  printf("Digite uma data no formato DD/MM/AAAA: ");
  scanf("%10s", data);

  if (strlen(data) != 10 || data[2] != '/' || data[5] != '/') {
    printf("Formato de data inválido\n");
    return 1;
  }

  for (i = 0; i < 10; i++) {
    if (i == 2 || i == 5) {
      continue;
    }
    if (data[i] < '0' || data[i] > '9') {
      printf("Formato de data inválido\n");
      return 1;
    }
  }

  dia = (data[0] - '0') * 10 + (data[1] - '0');
  mes = (data[3] - '0') * 10 + (data[4] - '0');
  ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 +
         (data[8] - '0') * 10 + (data[9] - '0');

  printf("Dia: %d\nMês: %d\nAno: %d\n", dia, mes, ano);

  return 0;
}
