#include <stdio.h>
#include <math.h>
int main()
{
  int N, i, valor;
  int V[4999];
  scanf("%d", &N);
  if (N < 5000)
  {
    for (i = 0; i < N; i++)
    {
      scanf("%d", &valor);
      V[i] = valor;
    }
    for (i = 0; i < N; i++)
    {

      printf("%d ", V[i]);
    }
    printf("\n");
  }

  return 0;
}