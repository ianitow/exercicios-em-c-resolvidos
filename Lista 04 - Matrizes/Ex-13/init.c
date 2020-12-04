#include <stdio.h>
void fillArray(int src[201][201], int N, int num)
{
  int i, j;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      src[i][j] = num;
    }
  }
}
void paintMatrix(int matrix[201][201], int size, int x, int y, int paint, int arrest, int type)
{

  int i, j;

  if (x - arrest < 0 || x + arrest >= size)
    return;
  if (y - arrest < 0 || y + arrest >= size)
    return;

  if (type == 2)
  {

    for (i = y - arrest; i <= y + arrest; i++)
    {
      for (j = x - arrest; j <= x + arrest; j++)
      {
        matrix[i][j] = paint;
      }
    }
  }
  else if (type == 1)

  {
    for (i = x - arrest; i <= x + arrest; i++)
    {

      matrix[y - arrest][i] = paint;
      matrix[y + arrest][i] = paint;
    }
    for (j = y - arrest; j <= y + arrest; j++)
    {
      matrix[j][x - arrest] = paint;
      matrix[j][x + arrest] = paint;
    }
  }
}

int main()
{
  int i, j;
  int matrix[201][201];
  int size, colorBackground;
  int x = 0, y = 0, paint, arrest, type;
  scanf("%d %d", &size, &colorBackground);
  fillArray(matrix, size, colorBackground);
  do
  {
    scanf("%d %d %d %d %d", &x, &y, &paint, &arrest, &type);
    if (x == -1 || y == -1)
    {
      break;
    }

    paintMatrix(matrix, size, x, y, paint, arrest, type);
  } while (x != -1 && y != -1);
  printf("P2\n%d %d\n255\n", size, size);
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      printf("%d", matrix[i][j]);
      if (j + 1 < size)
      {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}