#include <stdio.h>

int main()
{
  int n, i, j, elementosUnicos = 0, num, qntdIgual = 0;

  scanf("%d", &n);
  if (n < 5000)
  {
    int V[n];
    for (i = 0; i < n; i++)
    {
      scanf("%d", &num);
      V[i] = num;
    }
    for (i = 0; i < n; i++)
    {
      int achouRepetido = 0;
      for (j = i + 1; j < n; j++)
      {
        if (V[i] == V[j])
        {
          qntdIgual++;
          achouRepetido++;
        }
      }
      if (achouRepetido == 0)
      {
        elementosUnicos++;
      }
    }
    printf("%d\n", elementosUnicos - qntdIgual);
  }
  return 0;
}