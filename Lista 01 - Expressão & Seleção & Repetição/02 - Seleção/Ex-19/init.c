#include <stdio.h>
int main()
{
  double a, b, c, d, maior, segundoMaior, terceiroMaior, quartoMaior;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  scanf("%lf", &d);

  if (a > b)
  {
    maior = a;
    segundoMaior = b;
  }
  else
  {
    maior = b;
    segundoMaior = a;
  }
  if (c > maior)
  {
    terceiroMaior = segundoMaior;
    segundoMaior = maior;
    maior = c;
  }
  else
  {
    terceiroMaior = c;
  }
  if (d < terceiroMaior)
  {
    quartoMaior = d;
  }
  else
  {
    if (d < segundoMaior)
    {
      quartoMaior = terceiroMaior;
      terceiroMaior = d;
    }
    else
    {
      if (d < maior)
      {
        quartoMaior = terceiroMaior;
        terceiroMaior = segundoMaior;
        segundoMaior = d;
      }
      else
      {
        quartoMaior = terceiroMaior;
        terceiroMaior = segundoMaior;
        segundoMaior = maior;
        maior = d;
      }
    }
  }
  printf("%.2f, %.2f, %.2f, %.2f\n", quartoMaior, terceiroMaior, segundoMaior, maior);
  return 0;
}