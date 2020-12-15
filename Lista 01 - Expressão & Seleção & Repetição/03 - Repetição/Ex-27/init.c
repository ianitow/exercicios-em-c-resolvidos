#include <stdio.h>
int main()
{
  int qntd, i;
  int desordenado;
  double anterior, atual;
  while (1)
  {
    desordenado = 0;
    anterior = 0;
    atual = 0;
    scanf("%d", &qntd);
    if (qntd == 0)
    {
      break;
    }

    for (i = 0; i < qntd; i++)
    {

      scanf("%lf", &atual);
      if (atual < anterior)
      {

        desordenado = 1;
      }

      anterior = atual;
    }
    if (desordenado == 0)
    {
      printf("ORDENADA\n");
    }
    else
    {
      printf("DESORDENADA\n");
      desordenado = 0;
    }
  }
  return 0;
}