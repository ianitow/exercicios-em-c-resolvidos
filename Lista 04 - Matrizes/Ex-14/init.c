#include <stdio.h>
const int MAX = 1000;
int howManyOccurs(int m[][MAX], int el, int line, int column)
{
  int i, j;
  int occurs = 0;
  for (i = 0; i < line; i++)
  {
    for (j = 0; j < column; j++)
    {
      if (m[i][j] == el)
        occurs++;
    }
  }
  return occurs;
}
int getHigher(int m[][MAX], int line, int column)
{
  int i, j;
  int higher = m[0][0];
  for (i = 0; i < line; i++)
  {
    for (j = 0; j < column; j++)
    {
      if (m[i][j] > higher)
        higher = m[i][j];
    }
  }
  return higher;
}
int getLower(int m[][MAX], int line, int column)
{
  int i, j;
  int lower = m[0][0];
  for (i = 0; i < line; i++)
  {
    for (j = 0; j < column; j++)
    {
      if (m[i][j] < lower)
        lower = m[i][j];
    }
  }
  return lower;
}

int main()
{

  int N, M;
  int i, j;
  int lowerValue, higherValue;
  int occursHigher, occursLower;
  scanf("%d %d", &N, &M);
  if (M <= 1000 & N <= 1000)
  {
    int matriz[MAX][MAX];
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
      {
        scanf("%d", &matriz[i][j]);
      }
    }
    lowerValue = getLower(matriz, N, M);
    higherValue = getHigher(matriz, N, M);
    occursLower = howManyOccurs(matriz, lowerValue, N, M);
    occursHigher = howManyOccurs(matriz, higherValue, N, M);
    printf("%d %.2lf%%\n%d %.2lf%%\n", lowerValue, ((double)occursLower / (N * M) * 100), higherValue, ((double)occursHigher / (N * M) * 100));
  }
  return 0;
}