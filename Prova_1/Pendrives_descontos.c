#include <stdio.h>

int main()
{

  int qnt_comprada;
  double valor_final;

  scanf("%d", &qnt_comprada);

  if (qnt_comprada <= 5)
    valor_final = 5 * qnt_comprada;

  else if (qnt_comprada > 5 && qnt_comprada <= 10)
    valor_final = 5 * qnt_comprada * 0.95;

  else
    valor_final = 5 * qnt_comprada * 0.90;

  if (qnt_comprada <= 100)
    printf("Ainda existe estoque! O valor total eh de R$ %.2lf e sobraram %d pendrives no estoque", valor_final, 100 - qnt_comprada);

  else
    printf("Poxa, nao temos mais pendrives no estoque");

  return 0;
}