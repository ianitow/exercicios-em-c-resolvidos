#include <stdio.h>
#include <math.h>
#include <string.h>
/*
Faça um programa que leia 2 conujuntos (A e B) válidos, sem elementos repetidos, cada um com no
mínimo 1 e no máximo 100 elementos, e imprima A ∪ B e A ∩ B.
*/

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
  int *result;
  int v3[500000];
  int range = 0;
  int i, q1, q2, n;
  scanf("%d", &q1);
  scanf("%d", &q2);
  if (q2 > 0 && q1 > 0 && q1 <= 500000 && q2 <= 500000)
  {

    for (i = 0; i < q1; i++)
    {
      if (n >= 0 && n < 999999)
      {
        scanf("%d", &n);
        v3[i] = n;
      }
      range++;
    }
    for (i = 0; i < q2; i++)
    {
      if (n >= 0 && n < 999999)
      {
        scanf("%d", &n);
        v3[range] = n;
        range++;
      }
    }
    result = ordena(v3, range);
    for (i = 0; i < range; i++)
    {
      printf("%d\n", result[i]);
    }
  }
  return 0;
}