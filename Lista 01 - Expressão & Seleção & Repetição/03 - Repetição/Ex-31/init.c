#include <stdio.h>
#include <math.h>
long fatorial(int n)
{
  unsigned long long f = 1;

  while (n > 0)
    f *= n--;

  return f;
}
int main()
{
  double soma = 0;
  double valor, denominador;
  int i, n;
  scanf("%lf", &valor);
  if (valor <= M_PI)
  {
    scanf("%d", &i);
    for (n = 0; n <= i; n++)
    {
      soma += (pow((-1), n) * pow(valor, (2 * n))) / fatorial((2 * n));
    }
    printf("cos(%.2f) = %.6f\n", valor, soma);
  }

  return 0;
}