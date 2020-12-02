#include <stdio.h>
/**
* Função que calcula o valor de pi usando a série proposta por John Wallis
* @param n quantidade de termos da série
* @return o valor aproximado da constante pi
*/
double compute_pi(int n)
{
  int i = 1;
  int proximo = 1;
  int proximoDenominador = 0;
  double numerador = 2;
  double denominador = 3;
  long double result = 2 / 1;

  if (n < 1)
  {
    return result;
  }

  while (i < n)
  {
    if (proximoDenominador < 2)
    {
      proximoDenominador++;
    }
    else
    {
      proximoDenominador = 1;
      denominador += 2;
    }
    if (proximo < 2)
    {
      proximo++;
    }
    else
    {

      proximo = 1;
      numerador += 2;
    }
    i++;

    result = result * (numerador / denominador);
  }
  return result * 2;
}

int main(void)
{

  unsigned int t1;
  scanf("%u", &t1);
  printf("%.12lf\n", compute_pi(t1));
  return 0;
}