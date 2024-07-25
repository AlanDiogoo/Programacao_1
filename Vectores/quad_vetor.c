#include <stdio.h>
/*Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.*/

int main()
{
  int vector1[10], vector2[10];

  for (int i = 0; i < 10; i++)
    scanf("%d", &vector1[i]);

  for (int i = 0; i < 10; i++)
    vector2[i] = vector1[i] * vector1[i];

  printf("Vector 1:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", vector1[i]);
  printf("\n");

  printf("Vector 2:\n");
  for (int y = 0; y < 10; y++)
    printf("%d ", vector2[y]);

  return 0;
}