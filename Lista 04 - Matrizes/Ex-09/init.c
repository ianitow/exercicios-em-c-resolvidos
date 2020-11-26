#include <stdio.h>

int main()
{
  int i = 0, N, M, j;
  int alt = 0;
  int fill = 0;
  int sequence = 1;
  scanf("%d %d", &N, &M);
  if (N >= 1 && M >= 1)
  {
    int matriz[N][M];
    for (i = 0; i < N; i++)
    {
      if (alt == 1)
      {
        printf("%d ", sequence);

        fill = 0;
        sequence++;
      }
      else
      {
        printf("%d ", fill);

        fill = 1;
      }
      for (j = 1; j < M; j++)
      {

        if (fill == 1)
        {
          printf("%d", sequence);
          if (j + 1 < M)
            printf(" ");
          fill = 0;
          sequence++;
        }
        else
        {
          printf("%d", fill);
          if (j + 1 < M)
            printf(" ");
          fill = 1;
        }
      }
      printf("\n");
      alt = (alt == 0) ? 1 : 0;
      fill = (alt == 0) ? 0 : 1;
    }
  }

  return 0;
}
