#include <stdio.h>

int main()
{
  int N, i, j = 0;
  scanf("%d", &N);

  int matriz[N][N];
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (j = 0, i = N - 1; i >= 0; i--, j++)
  {
    printf("%d\n", matriz[j][i]);
  }

  return 0;
}