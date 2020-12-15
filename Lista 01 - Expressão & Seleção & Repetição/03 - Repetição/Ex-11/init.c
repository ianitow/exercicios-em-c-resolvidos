#include <stdio.h>

int main()
{
  int index, numero, elementoAnterior, atualElemento, maxEncontrado = 0, sequencia = 1;
  scanf("%d", &numero);
  if (numero > 0)
  {
    scanf("%d", &atualElemento);
    for (index = 1; index < numero; index++)
    {
      elementoAnterior = atualElemento;
      scanf("%d", &atualElemento);

      if (atualElemento > elementoAnterior)
      {
        sequencia++;
        if (sequencia > maxEncontrado)
        {
          maxEncontrado = sequencia;
        }
      }
      else
      {
        sequencia = 1;
      }
    }
    if (sequencia > maxEncontrado)
    {
      maxEncontrado = sequencia;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", maxEncontrado);
  }

  return 0;
}