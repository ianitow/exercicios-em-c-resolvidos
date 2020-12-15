#include <stdio.h>
int main()
{
  float resultado = 1.0;
  int index, maxValue;
  scanf("%d", &maxValue);
  if (maxValue > 1)
  {
    for (index = 2; index <= maxValue; index++)
    {
      resultado = resultado + (1.0 / index);
    }
    printf("%lf\n", resultado);
  }
  else
  {
    printf("Numero invalido!\n");
  }
  return 0;
}