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
      matriz[i][0] = alt;
      printf("%d", alt);
      for (j = 1; j < M; j++)
      {
        int num;
        if (matriz[i][j - 1] == 0)
        {
          num = 1;
          printf("%d", num);
        }
        else
        {
          num = 0;
          printf("%d", num);
        }
        matriz[i][j] = num;

        if (j + 1 == M)
          break;
      }
      alt = (alt == 0) ? 1 : 0;
      printf("\n");
    }
  }

  return 0;
}
