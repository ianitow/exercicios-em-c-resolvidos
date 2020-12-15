#include <stdio.h>
int main()
{
  int max = 0, numero, index = 1, atualElemento, elementoAnterior, sequencia = 1;
  scanf("%d", &numero);
  if (numero > 0)
  {
    scanf("%d", &elementoAnterior);

    while (index < numero)
    {
      scanf("%d", &atualElemento);
      if (atualElemento == elementoAnterior)
      {
        sequencia++;
        if (sequencia > max)
        {
          max = sequencia;
        }
      }
      else
      {
        sequencia = 1;
      }
      elementoAnterior = atualElemento;
      index++;
    }

    if (sequencia > max)
      max = sequencia;
    printf("O comprimento do segmento de numeros iguais e: %d\n", max);
  }

  return 0;
}