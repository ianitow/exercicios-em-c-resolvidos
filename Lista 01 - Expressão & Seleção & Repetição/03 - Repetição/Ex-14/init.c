#include <stdio.h>
int main()
{
  int N, k, i, j = 1;
  scanf("%d", &N);
  if (N < 2)
  {
    printf("Campeonato invalido!");
  }

  for (k = 1; k <= N; k++)
  {

    for (i = k + 1; i <= N; i++)
    {
      printf("Final %d: Time%d X Time%d\n", j, k, i);
      j++;
    }
  }

  return 0;
}