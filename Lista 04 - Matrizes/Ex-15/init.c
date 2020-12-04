#include <stdio.h>

int main()
{
  int matriz[11][11];
  int ordem[122];
  int N, M;
  int i = 0, j;
  int switched = 1;
  int offsetTop = 0, offsetBottom = 0, offsetLeft = 0, offsetRight = 0;
  scanf("%d %d", &N, &M);

  if ((N <= 0 || M <= 0) || (N > 10 || M > 10))
    printf("Dimensao invalida");
  else
  {
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
      {
        scanf("%d", &matriz[i][j]);
      }
    }
    i = 0;
    while (i < N * M)
    {

      for (j = offsetLeft; (i < N * M && j < M - offsetRight); j++)
      {
        printf("%d", matriz[offsetTop][j]);
        i++;
        if (i != N * M)
          printf(" ");
      }
      offsetTop++;

      for (j = offsetTop; (i < N * M && j < N - offsetBottom); j++)
      {
        printf("%d", matriz[j][M - offsetRight - 1]);

        i++;
        if (i != N * M)
          printf(" ");
      }

      offsetRight++;
      for (j = M - offsetRight - 1; (i < N * M && j >= offsetLeft); j--)
      {
        printf("%d", matriz[N - offsetBottom - 1][j]);

        i++;
        if (i != N * M)
          printf(" ");
      }

      offsetBottom++;
      for (j = N - offsetBottom - 1; (i < N * M && j >= offsetTop); j--)
      {
        printf("%d", matriz[j][offsetLeft]);

        i++;
        if (i != N * M)
          printf(" ");
      }
      offsetLeft++;
    }
  }

  printf("\n");
  return 0;
}