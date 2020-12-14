#include <stdio.h>
int main()
{
  float entrada1, entrada2, entrada3, primeiroMaior, segundoMaior, terceiroMaior;
  scanf("%f", &entrada1);
  scanf("%f", &entrada2);
  scanf("%f", &entrada3);

  if (entrada1 > entrada2)
  {
    primeiroMaior = entrada1;
    segundoMaior = entrada2;
  }
  else
  {
    segundoMaior = entrada1;
    primeiroMaior = entrada2;
  }

  if (entrada3 > primeiroMaior)
  {

    terceiroMaior = segundoMaior;
    segundoMaior = primeiroMaior;
    primeiroMaior = entrada3;
  }
  else
  {
    if (entrada3 > segundoMaior)
    {
      terceiroMaior = segundoMaior;
      segundoMaior = entrada3;
    }
    else
    {
      terceiroMaior = entrada3;
    }
  }

  printf("%.2f, %.2f, %.2f\n", terceiroMaior, segundoMaior, primeiroMaior);
  return 0;
}