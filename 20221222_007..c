#include <stdio.h>

void main() {
  int tempot, hora, min, seg;
  float msInicial, msFinal;

  printf("Massa Inicial em gramas:\n");
  scanf("%f", &msInicial);

  msFinal = msInicial;
  tempot = 0;
  while (msFinal >= 0.5) {
    msFinal = msFinal / 2;
    tempot = tempot + 50;
  }

  printf("\n");
  printf("Massa Inicial: %7.0f gramas.\n", msInicial);
  printf("Massa Final: %9.2f gramas.\n", msFinal);

  printf("\n");
  printf("Tempo Total: %d segundos.\n", tempot);
  hora = (tempot / 3600);
  min = (tempot % 3600) / 60;
  seg = (tempot % 3600) % 60;
  printf("Tempo Dividido: %d  horas: %d  minutos: %d  segundos.", hora, min, seg);
}