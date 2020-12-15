#include <stdio.h>
int main()
{
  int numeroInicial, razaoNumero, ocorrencias, total = 0, index = 1;
  scanf("%d %d %d", &numeroInicial, &razaoNumero, &ocorrencias);

  while (index <= ocorrencias)
  {
    total = total + (numeroInicial + (index - 1) * razaoNumero);
    index++;
  }
  printf("%d\n", total);
  return 0;
}