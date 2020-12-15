#include <stdio.h>
#include <stdlib.h>
int main()
{
  int numero, i, divisivel = 0;
  ;
  scanf("%d", &numero);
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
      printf("PRIMO\n");
    else
      printf("NAO PRIMO\n");
  }
  else
  {
    printf("Numero invalido!\n");
  }
  return 0;
}