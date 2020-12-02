#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int next_power(int n, int p)
{
  if (n == 0)
  {
    return 1;
  }
  int aprox = 0;
  int result = 0;

  if (n >= 0)
  {
    while (result <= n)
    {
      aprox++;
      result = pow(aprox, p);
    }
    if (abs(n - result) < abs(n - (int)pow(aprox - 1, p)))
    {

      return aprox;
    }
    else
    {
      return aprox - 1;
    }
  }
  return 0;
}
int main(void)
{
  int numBase, potencia, aprox;
  scanf("%d %d", &numBase, &potencia);
  if (!(numBase == 0 && potencia == 0))
  {
    aprox = next_power(numBase, potencia);
    printf("%d -> %d^%d = %d\n", numBase, aprox, potencia, (int)pow(aprox, potencia));
  }
  return 0;
}