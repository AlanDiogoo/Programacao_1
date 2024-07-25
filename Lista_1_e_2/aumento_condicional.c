#include <stdio.h>

int main()
{
  double salario, percent;
  scanf("%lf", &salario);
  if (salario <= 280)
  {
    percent = 0.20;
  }
  else if (salario > 280 && salario <= 700)
  {
    percent = 0.15;
  }
  else if (salario > 700 && salario < 1500)
  {
    percent = 0.10;
  }
  else if (salario >= 1500)
  {
    percent = 0.05;
  }

  printf("%.2lf\n%.0lf\n%.2lf\n%.2lf", salario, percent * 100, salario * percent, salario * percent + salario);

  return 0;
}