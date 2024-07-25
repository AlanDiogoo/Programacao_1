// calculadora para as 4 operações
#include <stdio.h>

int main()
{
  printf("Menu:\n Escolha a operação que deseja realizar\n1- Somar\n2- Subtrair\n3-Multiplicar\n4- Dividir\n0- Sair\n");

  int valor, num, i = 1;
  scanf("%d", &valor);

  if (valor == 0)
  {
    return 0;
  }

  printf("Digite o numero que deseja realizar a operacao:");
  scanf("%d", &num);

  switch (valor)
  {

  case 0:
    break;
  case 1:
  {
    for (; i <= 10; i++)
    {
      printf("%d + %d = %d\n", num, i, num + i);
    }
    break;
  }
  case 2:
  {
    for (i = num + 1; i - num <= 10; i++)
    {
      printf("%d - %d = %d\n", i, num, i - num);
    }
    break;
  }
  case 3:
  {
    for (; i <= 10; i++)
    {
      printf("%d * %d = %d\n", num, i, num * i);
    }
    break;
  }
  case 4:
  {
    if (num == 0)
    {
      printf("Nao eh possivel realizar essa operacao!");
    }
    else
      for (; i <= 10; i++)
      {
        printf("%d + %d = %d\n", num, i, num + i);
      }
    break;
  }

  default:
  {
    printf("Valor invalido!");
    break;
  }
  }

  return 0;
}