#include <stdio.h>

int main()
{

  int mat1[3][3], mat2[3][3];

  for (int i = 0; i < 3; i++)
    for (int y = 0; y < 3; y++)
      scanf("%d", &mat1[i][y]);

  printf("Matriz dois\n");

  for (int i = 0; i < 3; i++)
    for (int y = 0; y < 3; y++)
      scanf("%d", &mat2[i][y]);

  for (int i = 0; i < 3; i++)
  {
    for (int y = 0; y < 3; y++)
      printf("%3d ", mat2[i][y] + mat1[i][y]);
    printf("\n");
  }

  return 0;
}