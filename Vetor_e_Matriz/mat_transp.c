#include <stdio.h>

int main()
{
  int tam_l = 5, tam_c = 4;
  int mat[tam_l][tam_c], transp[tam_c][tam_l];

  for (int i = 0; i < tam_l; i++)
    for (int j = 0; j < tam_c; j++)
      scanf("%d", &mat[i][j]);

  printf("\tMatriz inicial:\n\n");
  for (int i = 0; i < tam_l; i++)
  {
    for (int j = 0; j < tam_c; j++)
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  printf("\n\tMatriz trasposta:\n\n");
  for (int i = 0; i < tam_l; i++)
    for (int j = 0; j < tam_c; j++)
      transp[j][i] = mat[i][j];

  for (int i = 0; i < tam_c; i++)
  {
    for (int j = 0; j < tam_l; j++)
      printf("%d ", transp[i][j]);
    printf("\n");
  }
  return 0;
}