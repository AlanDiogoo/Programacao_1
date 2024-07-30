#include <stdio.h>

int main()
{

  int vetor1[5], vetor2[5], vetor3[5];

  printf("Digite 5 valores do vetor 1:");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &vetor1[i]);
  }
  printf("Digite 5 valores do vetor 2:");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &vetor2[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    vetor3[i] = vetor1[i] + vetor2[i];
  }

  printf("vetor 1:\n");

  for (int i = 0; i < 5; i++)
    printf("%d ", vetor1[i]);
  printf("\n");

  printf("vetor 2:\n");

  for (int i = 0; i < 5; i++)
    printf("%d ", vetor2[i]);
  printf("\n");

  printf("vetor 3:\n");

  for (int i = 0; i < 5; i++)
    printf("%d ", vetor3[i]);
  printf("\n");

  return 0;
}