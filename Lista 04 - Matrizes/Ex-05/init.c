#include <stdio.h>

int main()
{
  int i = 0, N, M, j;
  int alt = 1;
  scanf("%d %d", &N, &M);
  if (N >= 1 && M >= 1)
  {
    int matriz[N][M];
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
      {
        matriz[i][j] = alt;
        printf("%d", alt);
        if (j + 1 == M)
          break;
        alt = (alt == 0) ? 1 : 0;
      }
      printf("\n");
    }
  }

  return 0;
}
