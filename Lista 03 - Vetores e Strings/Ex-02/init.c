#include <stdio.h>
#include <math.h>
int main()
{
  int N, currentValue, K, i, count = 0;
  int V[1000];

  while (1)
  {
    scanf("%d", &N);
    if (N < 1 || N > 1000)
      continue;

    for (i = 0; i < N; i++)
    {
      scanf("%d", &currentValue);
      V[i] = currentValue;
    }
    scanf("%d", &K);
    for (i = 0; i < N; i++)
    {
      if (K <= V[i])
      {
        count++;
      }
    }
    printf("%d\n", count);
    return 0;
  }
}