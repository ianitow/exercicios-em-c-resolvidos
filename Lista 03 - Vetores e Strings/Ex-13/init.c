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
int main()
{
  int *result;
  int N, i, value;
  scanf("%d", &N);
  if (N >= 1 && N <= 1000)
  {
    int V[N];
    for (i = 0; i < N; i++)
    {
      scanf("%d", &value);
      V[i] = value;
    }
    result = ordena(V, N);
    for (i = 0; i < N; i++)
    {
      printf("%d\n", result[i]);
    }
  }
  return 0;
}