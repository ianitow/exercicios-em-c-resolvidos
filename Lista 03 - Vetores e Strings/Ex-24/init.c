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
  int N, i, j = 0, value;
  int *result;
  scanf("%d", &N);

  int v[N];
  int printed[N];

  for (i = 0; i < N; i++)
  {
    scanf("%d", &value);

    v[i] = value;
  }

  for (i = 0; i < N; i++)
  {
    if (isElementInside(printed, v[i], j) == 0)
    {
      printed[j] = v[i];
      j++;
    }
  }
  result = ordena(printed, j);
  for (i = 0; i < j; i++)
  {
    printf("%d\n", printed[i]);
  }
  return 0;
}