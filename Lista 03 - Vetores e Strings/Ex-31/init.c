#include <stdio.h>
void coutingSort(int *array, int N)
{
  int i = 0, j = 0, k = 0;
  int MAX = -1;
  for (i = 0; i < N; i++)
  {
    if (array[i] > MAX)
    {
      MAX = array[i];
    }
  }
  int v[MAX];

  for (i = 0; i <= MAX; i++)
  {
    v[i] = 0;
  }

  for (i = 0; i < N; i++)
  {
    v[array[i]]++;
  }
  for (i = 0; i <= MAX; i++)
  {
    for (j = v[i]; j > 0; j--)
    {
      if (k > 0)
      {
        printf(" ");
      }
      printf("%d", i);
      k++;
    }
  }
}
int main()
{
  int N = -1, i;
  int value;

  while (1)
  {
    scanf("%d", &N);
    if (N == 0)
    {
      break;
    }

    if (N >= 1 && N <= 10000)
    {
      int v[N];
      for (i = 0; i < N; i++)
      {
        scanf("%d", &value);

        v[i] = value;
        printf("Value:%d", value);
      }

      printf("\n");
    }
  }

  return 0;
}