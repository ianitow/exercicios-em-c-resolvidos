#include <stdio.h>

int main()
{
  int M, N;
  int i, j;
  int indiceMaior[2] = {0, 0};
  int indiceMenor[2] = {0, 0};
  int aux;
  scanf("%d %d", &M, &N);
  if (M <= 1000 & N <= 1000)
  {
    int matriz[M][N];
    for (i = 0; i < M; i++)
    {
      for (j = 0; j < N; j++)
      {
        scanf("%d", &matriz[i][j]);
      }
    }
    for (i = 0; i < M; i++)
    {
      for (j = 0; j < N; j++)
      {
        if (matriz[i][j] > matriz[indiceMaior[0]][indiceMaior[1]])
        {
          indiceMaior[0] = i;
          indiceMaior[1] = j;
        }

        if (matriz[i][j] < matriz[indiceMenor[0]][indiceMenor[1]])
        {
          indiceMenor[0] = i;
          indiceMenor[1] = j;
        }
      }
    }
    aux = matriz[indiceMenor[0]][indiceMenor[1]];
    matriz[indiceMenor[0]][indiceMenor[1]] = matriz[indiceMaior[0]][indiceMaior[1]];
    matriz[indiceMaior[0]][indiceMaior[1]] = aux;
    for (i = 0; i < M; i++)
    {
      for (j = 0; j < N; j++)
      {
        printf("%d", matriz[i][j]);
        if (j + 1 < N)
          printf(" ");
      }
      printf("\n");
    }
  }
  return 0;
}