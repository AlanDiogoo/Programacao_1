#include <stdio.h>

int main()
{
  int mat[3][3];

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &mat[i][j]);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i + j == 2)
        printf("%d ", mat[i][j]);
      else
        printf("  ");
    }
    printf("\n");
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == j)
        printf("%d ", mat[i][j]);
      else
        printf("  ");
    }
    printf("\n");
  }
  return 0;
}