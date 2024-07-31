#include <stdio.h>

int main()
{
  int mat[3][3], aux1[3] = {0}, aux2[3] = {0};

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &mat[i][j]);

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
    {
      aux1[i] += mat[i][j];
      aux2[i] += mat[j][i];
    }

  printf("Matriz:\n\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      printf("%d ", mat[i][j]);
    printf("\n");
  }
  printf("\n\n");
  for (int i = 0; i < 3; i++)
    printf("Soma da linha %d: %d\t ", i + 1, aux1[i]);

  printf("\n");

  for (int i = 0; i < 3; i++)
    printf("Soma da Coluna %d: %d\t ", i + 1, aux2[i]);

  return 0;
}