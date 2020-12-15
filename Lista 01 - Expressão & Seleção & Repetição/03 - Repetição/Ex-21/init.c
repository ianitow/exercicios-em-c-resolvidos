#include <stdio.h>

int main()
{

  int i, numero, segundoNumero, aux, aux2, re;
  scanf("%d", &re);
  for (i = 0; i < re; i++)
  {
    scanf("%d %d", &numero, &segundoNumero);
    aux = (numero % 10) * 100 + (((numero % 100) / 10) * 10) + numero / 100;
    aux2 = (segundoNumero % 10) * 100 + (((segundoNumero % 100) / 10) * 10) + segundoNumero / 100;

    if (aux > aux2)
    {
      printf("%d", aux);
    }
    else
    {
      printf("%d", aux2);
    }
    printf("\n");
  }
  return 0;
}