#include <stdio.h>

const int MAX = 1000;
void ordenaColuna(int m[MAX][MAX], int length)
{
  int column = 0;
  int i, j;
  int swapped;
  int aux;
  for (i = 0; i < length; i++)
  {
    do
    {
      swapped = 0;
      for (j = 0; j < length; j++)
      {
        if (j + 1 < length && m[j][i] > m[j + 1][i])
        {
          aux = m[j][i];
          m[j][i] = m[j + 1][i];
          m[j + 1][i] = aux;
          swapped = 1;
        }
      }
    } while (swapped == 1);
  }
}

int main()
{
  int m[MAX][MAX];
  int result[MAX][MAX];
  int N, i, j;
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      scanf("%d", &m[i][j]);
    }
  }
  ordenaColuna(m, N);
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}