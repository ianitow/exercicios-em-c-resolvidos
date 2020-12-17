#include <stdio.h>
#include <math.h>
int isPrimo(int numero)
{
  int i, divisivel = 0;
 
  if (numero >= 0)
  {
 
    for (i = 1; i <= numero; i++)
    {
      if (numero % i == 0)
      {
        divisivel++;
      }
    }
 
    if (divisivel == 2)
      return 1;
    else
      return -1;
  }
}
 
int potencia_prima(int n, int *k, int *p)
{
  int achados = 0;
  int i = 2;
  if (n > 0)
  {
 
    while (achados < n)
    {
 
      while (pow(*k, *p) <= i)
 
      {
 
        if (pow(*k, *p) == i)
        {
          if (*k % 2 > 0 || *k == 2)
          {
            if (isPrimo(*k) == 1)
            {
              printf("%d : %d^%d\n", i, *k, *p);
              achados++;
            }
            i++;
 
            *k = 2;
            *p = 1;
          }
          else
          {
            i++;
          }
 
          *k = 2;
          *p = 1;
          break;
        }
        else if (pow(*k, *p + 1) > i)
        {
          *k = *k + 1;
          *p = 1;
        }
        else
        {
          *p = *p + 1;
        }
      }
    }
  }
}
int main()
{
  int p = 1;
  int k = 2;
  int d;
  scanf("%d", &d);
  potencia_prima(d, &k, &p);
  return 0;
}
