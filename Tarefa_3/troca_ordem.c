#include <stdio.h>
/*Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado.*/

int main()
{
  int tam, temp;

  scanf("%d", &tam);

  int vetor[tam], n = tam - 1;

  printf("Digite a quantidade N dos vetores:");

  for (int i = 0; i < tam; i++)
    scanf("%d", &vetor[i]);

  for (int i = 0; i < tam / 2; i++)
  {
    temp = vetor[i];
    vetor[i] = vetor[n];
    vetor[n] = temp;
    n--;
  }

  printf("Vetor final:\n");
  for (int y = 0; y < tam; y++)
    printf("%d ", vetor[y]);

  return 0;
}