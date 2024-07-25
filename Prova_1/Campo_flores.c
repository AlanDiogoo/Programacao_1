#include <stdio.h>

int main()
{
  int horario, qnt_horas_sono, inverno, verao, primavera, outono, chance, valor_estacao, valor_clima;
  char estacao_ano, clima;

  scanf("%d %d %c %c %d %d %d %d", &horario, &qnt_horas_sono, &estacao_ano, &clima, &inverno, &verao, &primavera, &outono);

  if (estacao_ano == 'V')
    valor_estacao = verao;
  else if (estacao_ano == 'P')
    valor_estacao = primavera;
  else if (estacao_ano == 'O')
    valor_estacao = outono;
  else if (estacao_ano == 'I')
    valor_estacao = inverno;

  if (clima == 'E')
    valor_clima = 7;
  else if (clima == 'C')
    valor_clima = 5;
  else if (clima == 'N')
    valor_clima = 3;

  if (((qnt_horas_sono * 19) / 2) >= 70)
  {
    chance = valor_estacao + ((horario / 60) % valor_clima) * qnt_horas_sono;
    if (chance > 100)
      chance = 100;

    if (chance >= valor_estacao * 3 || chance == 100)
    {
      printf("%d%, Ekul possui chances de encontrar a flor :)", chance);
    }
    else
    {
      printf("%d%, Ekul nao possui chances de encontrar a flor :(", chance);
    }
  }
  else
    printf("0%, Ekul nao acordou disposto hoje :(");

  return 0;
}