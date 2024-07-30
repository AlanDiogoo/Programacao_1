#include <stdio.h>
/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).*/

int main()
{

  int quant[10], maisvend = 0;
  double valor[10], valort, valorp;

  for (int i = 0; i < 10; i++)
  {
    scanf("%lf %d", &valor[i], &quant[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    valorp = quant[i] * valor[i];
    valort += quant[i] * valor[i];
    printf("Vendido: %d\t Valor unitario R$%.2lf\t Valor total R$ %.2lf\n", quant[i], valor[i], valorp);
  }
  printf("Valor total das vendas: R$ %.2lf\n", valort);
  printf("Valor da comissao paga ao vendedor: R$ %.2lf\n", valort * 0.05);

  for (int i = 0; i < 10; i++)
  {
    if (quant[i] > maisvend)
      maisvend = quant[i];
  }
  for (int i = 0; i < 10; i++)
  {
    if (quant[i] == maisvend)
    {
      printf("Posicao: %d\t Valor R$%.2lf\n", i, valor[i]);
    }
  }
  return 0;
}