#include <stdio.h>

int main()
{
  int N, i, j = 0;
  scanf("%d", &N);
  if (N > 1 && N <= 1000)
  {
    int matriz[N][N];
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < N; j++)
      {
        scanf("%d", &matriz[i][j]);
      }
    }
    for (i = 0; i < N; i++)
    {
      printf("%d\n", matriz[i][i]);
    }
  }
  return 0;
}