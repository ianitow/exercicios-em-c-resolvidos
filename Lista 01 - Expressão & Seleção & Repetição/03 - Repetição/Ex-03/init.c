#include <stdio.h>
int main()
{
  int i, numero;
  int step = 2;
  scanf("%d", &numero);

  if (numero<2000 & numero> 5)
  {
    i = 1;
    while (step <= numero)
    {
      printf("%d^2 = %d\n", step, (step * step));
      step += 2;
    }
  }

  return 0;
}