#include <stdio.h>
int main()
{
  int direitaPraEsquerda = 0, esquerdaPraDireita = 0, valor = 0;
  scanf("%d", &direitaPraEsquerda);
  if (direitaPraEsquerda > 99999)
  {
    printf("NUMERO INVALIDO\n");
    return 0;
  }
  else
  {
    valor = direitaPraEsquerda;
    while (valor > 0)
    {
      if (esquerdaPraDireita > 0)
      {
        esquerdaPraDireita = 10 * esquerdaPraDireita + valor % 10;
      }
      else
      {
        esquerdaPraDireita = valor % 10;
      }

      valor = valor / 10;
    }
    if (direitaPraEsquerda == esquerdaPraDireita)
    {
      printf("PALINDROMO\n");
    }
    else
    {
      printf("NAO PALINDROMO\n");
    }
  }
  return 0;
}