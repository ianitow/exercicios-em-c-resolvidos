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
    for (i = 0; i < N; i++)
    {
      if (V[i] % 2 == 0)
      {
        count++;
        printf("%d", V[i]);
        if (i < N)
        {
          printf(" ");
        }
      }
    }
    printf("%d\n", count);
    break;
  }
  return 0;
}