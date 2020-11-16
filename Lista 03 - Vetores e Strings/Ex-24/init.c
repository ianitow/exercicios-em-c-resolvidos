#include <stdio.h>
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

int isElementInside(int *array, int el, int range)
{
  int i;
  for (i = 0; i < range; i++)
  {
    if (array[i] == el)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  int N, i, value;
  int *result;
  scanf("%d", &N);

  int v[N];
  int printed[N];

  for (i = 0; i < N; i++)
  {
    scanf("%d", &value);

    v[i] = value;
  }
  result = ordena(v, N);
  for (i = 0; i < N; i++)
  {
    if (isElementInside(printed, result[i], N) == 0)
    {
      printf("%d\n", result[i]);
      printed[i] = result[i];
    }
  }

  return 0;
}