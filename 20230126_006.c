#include <stdio.h>

#define N 5

int main() {
  int i, j;
  int mat[N][N];
  int sum_diag_principal = 0, sum_diag_secundaria = 0, sum_linhas = 0, sum_colunas = 0;
  int flag = 1;

  // Leitura da matriz
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("Insira o elemento [%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  // Soma da diagonal principal
  for (i = 0; i < N; i++) {
    sum_diag_principal += mat[i][i];
  }

  // Soma da diagonal secundária
  for (i = 0; i < N; i++) {
    sum_diag_secundaria += mat[i][N-i-1];
  }

  // Verifica se a soma das diagonais é igual
  if (sum_diag_principal != sum_diag_secundaria) {
    flag = 0;
  }

  // Soma das linhas
  for (i = 0; i < N; i++) {
    sum_linhas = 0;
    for (j = 0; j < N; j++) {
      sum_linhas += mat[i][j];
    }
    // Verifica se a soma das linhas é igual à soma das diagonais
    if (sum_linhas != sum_diag_principal) {
      flag = 0;
      break;
    }
  }

  // Soma das colunas
  for (j = 0; j < N; j++) {
    sum_colunas = 0;
    for (i = 0; i < N; i++) {
      sum_colunas += mat[i][j];
    }
    // Verifica se a soma das colunas é igual à soma das diagonais
    if (sum_colunas != sum_diag_principal) {
      flag = 0;
      break;
    }
  }

  // Imprime o resultado
  if (flag == 1) {
    printf("A matriz é um quadrado mágico\n");
  } else {
    printf("A matriz não é um quadrado mágico\n");
  }

  return 0;
}
