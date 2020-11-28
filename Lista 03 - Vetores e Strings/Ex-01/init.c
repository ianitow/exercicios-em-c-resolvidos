#include <stdio.h>
#include <math.h>
int main()
{
  int tamanho, i, j, valor, qntdBusca, buscado;

  scanf("%d", &tamanho);

  int valores[tamanho];

  for (i = 0; i < tamanho; i++)
  {
    scanf("%d", &valor);
    valores[i] = valor;
  }
  scanf("%d", &qntdBusca);

  for (i = 1; i <= qntdBusca; i++)
  {
    scanf("%d", &buscado);
    for (j = 0; j < tamanho; j++)
    {
      if (valores[j] == buscado)
      {
        printf("ACHEI\n");
        break;
      }
      else if (j == tamanho - 1 && valores[j] != buscado)
      {
        printf("NAO ACHEI\n");
        break;
      }
    }
  }

  return 0;
}