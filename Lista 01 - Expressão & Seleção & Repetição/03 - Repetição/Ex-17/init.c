#include <stdio.h>

void raiz_quadrada(double n, double e)
{
  double valorAtual, oldValue = 1, current, err = 100;

  while (err > e)
  {
    current = n / oldValue;
    valorAtual = (oldValue + current) / 2;
    err = n - (valorAtual * valorAtual);
    if (err < 0)
      err *= -1;
    oldValue = valorAtual;
    printf("r: %.9lf, err: %.9lf\n", valorAtual, err);
    if (err <= e)
      break;
  }
}

int main()
{
  double num, erro;
  scanf("%lf %lf", &num, &erro);
  raiz_quadrada(num, erro);
  return 0;
}