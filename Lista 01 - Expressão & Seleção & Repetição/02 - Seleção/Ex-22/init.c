#include <stdio.h>
int main()
{
  int i;
  float a, b, c, maior, segundoMaior, terceiroMaior;
  scanf("%d", &i);
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
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
    terceiroMaior = segundoMaior;
    segundoMaior = c;
  }
  if (i == 1)
  {
    printf("%.2f %.2f %.2f\n", terceiroMaior, segundoMaior, maior);
    return 0;
  }
  else
  {
    if (i == 2)
    {
      printf("%.2f %.2f %.2f\n", maior, segundoMaior, terceiroMaior);
      return 0;
    }
    else
    {
      if (i == 3)
      {
        printf("%.2f %.2f %.2f\n", terceiroMaior, maior, segundoMaior);
        return 0;
      }
    }
  }
  return 0;
}