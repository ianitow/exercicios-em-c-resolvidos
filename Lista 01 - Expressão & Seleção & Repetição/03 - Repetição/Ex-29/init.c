#include <stdio.h>
#include <math.h>

int main()
{
  double fracao;
  int valorInteiro, i;

  scanf("%lf", &fracao);
  int numerador = fracao * 100000;
  int denominador = 100000;
  for (i = 2; i < denominador; i++)
  {
    if (numerador % i == 0 && denominador % i == 0)
    {
      numerador /= i;
      denominador /= i;
      i = 2;
    }
  }
  printf("%d/%d\n", numerador, denominador);
  return 0;
}