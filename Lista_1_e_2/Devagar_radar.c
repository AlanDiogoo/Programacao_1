#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  double velo_max, velo_car, valor_multa;
  int pts_carteira;

  scanf("%lf%lf", &velo_max, &velo_car);

  if (velo_car > velo_max && velo_car <= velo_max * 1.2)
  {
    valor_multa = 85.13;
    pts_carteira = 4;
  }
  else if (velo_car > velo_max * 1.2 && velo_car <= velo_max * 1.5)
  {
    valor_multa = 127.69;
    pts_carteira = 5;
  }
  else if (velo_car > velo_max * 1.5)
  {
    valor_multa = 574.62;
    pts_carteira = 7;
  }
  else if (velo_car <= velo_max)
  {
    valor_multa = 0.00;
    pts_carteira = 0;
  }
  printf("%.2lf\n%d", valor_multa, pts_carteira);

  return 0;
}