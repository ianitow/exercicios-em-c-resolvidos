#include <stdio.h>

int somaVetor(int *elements, int range)
{
  int i, k = 0;
  for (i = 0; i < range; i++)
  {
    k += elements[i];
  }
  return k;
}

int *ordena(int *nums, int qntd)
{
  int i, j;
  int swapped = 0;
  int aux;

  while (1)
  {
    swapped = 0;
    for (i = 0; i < qntd; i++)
    {
      if ((i + 1) < qntd && *(nums + i) > *(nums + i + 1))
      {

        aux = *(nums + i + 1);
        *(nums + i + 1) = *(nums + i);
        *(nums + i) = aux;

        swapped++;
      }
    }
    if (swapped == 0 && i >= qntd)
    {
      return nums;
    }
  }

  return nums;
}

int main()
{
  int T, n, i, j, l, m, soma;
  int *result;
  scanf("%d", &T);

  for (m = 0; m < T; m++)
  {

    int V[9];
    for (i = 0; i < 9; i++)
    {
      scanf("%d", &n);
      V[i] = n;
    }
    V[i] = 0;
    soma = somaVetor(V, 9);
    result = ordena(V, 9);
    for (i = 0; i < 9; i++)
    {

      for (j = i + 1; j < 9; j++)
      {

        if ((soma - (result[i] + result[j])) == 100)
        {
          for (l = 0; l < 9; l++)
          {
            if (result[l] != result[i] && result[l] != result[j])
            {
              printf("%d\n", result[l]);
            }
          }
        }
      }
    }
  }
}