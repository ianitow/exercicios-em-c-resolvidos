#include <stdio.h>
#include <stdlib.h>
int digit_count(long int n)
{
  n = abs(n);
  int i = 0;
  if (n == 0 || n == -0)
  {
    return 1;
  }
 
  if (n > 0)
  {
    while (n > 0)
    {
      n /= 10;
      i++;
    }
  }
  else
  {
    while (n < 0)
    {
      n /= 10;
      i++;
    }
  }
  return i;
}
int main()
{
  int d;
  scanf("%d", &d);
  printf("Numero de digitos: %d\n", digit_count(d));
  return 0;
}
