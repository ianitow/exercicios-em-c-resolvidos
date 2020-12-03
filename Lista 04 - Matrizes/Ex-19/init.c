#include <stdio.h>
#include <string.h>

void copyToArray(float src[11][11], float dest[11][11], int range)
{
  int i, j;
  for (i = 0; i < range; i++)
  {
    for (j = 0; j < range; j++)
    {
      dest[i][j] = src[i][j];
    }
  }
}
void clearArray(float src[11][11], int N)
{
  int i, j;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      src[i][j] = 0;
    }
  }
}

int main()
{
  float matriz[11][11];
  float copy[11][11];
  float result[11][11];
  int i, j;
  int N, M;
  int currentLine = 0;
  int currentColumn = 0;
  int looped = 0;
  scanf("%d", &N);
  scanf("%d", &M);
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      scanf("%f", &matriz[i][j]);
      copy[i][j] = matriz[i][j];
    }
  }
  copyToArray(matriz, result, N);
  while (M > 1)
  {
    clearArray(result, N);
    while (looped < N)
    {

      for (i = 0; i < N; i++)
      {
        for (j = 0; j < N; j++)
        {
          result[currentLine][currentColumn] += copy[currentLine][j] * matriz[j][i];
        }
        currentColumn++;
      }
      currentColumn = 0;
      currentLine++;
      looped++;
    }
    copyToArray(result, copy, N);

    M--;
    looped = 0;
    currentLine = 0;
    currentColumn = 0;
  }
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {

      printf("%.3lf", result[i][j]);

      if (j + 1 < N)
      {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
