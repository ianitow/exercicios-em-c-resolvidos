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
  int N;
  int i, j, k, num;
  int *result;
  int qntdEl;
  scanf("%d", &N);
  if (N >= 1 && N <= 10)
  {

    for (i = 0; i < N; i++)
    {

      scanf("%d", &qntdEl);
      if (qntdEl >= 2 && qntdEl <= 1000)
      {
        int v[qntdEl];
        for (j = 0; j < qntdEl; j++)
        {
          scanf("%d", &num);
          v[j] = num;
        }
        result = ordena(v, qntdEl);
        int menorOcorrencia = 2000;
        for (j = 0; j < qntdEl; j++)
        {
          for (k = j + 1; k < qntdEl; k++)
          {
            if (result[k] - result[j] < menorOcorrencia)
            {
              menorOcorrencia = result[k] - result[j];
            }
          }
        }
        printf("%d %d\n", menorOcorrencia, qntdEl * qntdEl);
      }
    }
  }
  return 0;
}