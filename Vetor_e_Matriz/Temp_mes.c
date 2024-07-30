#include <stdio.h>
/*Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro …). Desconsidere empates*/

int main()
{
  int indMaior, indMenor;
  double temp[12], maior = 0, menor = 99;

  for (int i = 0; i < 12; i++)
  {
    scanf("%lf", &temp[i]);
  }
  for (int i = 0; i < 12; i++)
  {
    if (temp[i] > maior)
    {
      maior = temp[i];
      indMaior = i;
    }

    if (temp[i] < menor)
    {
      menor = temp[i];
      indMenor = i;
    }
  }
  printf("Maior temp: %.2lf\t Ocorreu no mes: %d\n", maior, indMaior + 1);
  printf("Menor temp: %.2lf\t Ocorreu no mes: %d\n", menor, indMenor + 1);
  return 0;
}