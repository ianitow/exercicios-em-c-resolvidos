#include <stdio.h>
#define MAX 100

int printBorder(int m[][MAX], int width, int height);

int *paintBorder(int m[][MAX], int width, int height, int border, int value, int final[][100])
{
  int i, j, k, l;
  if (border == 0)
    return 0;
  i = 0;
  while (i < border)
  {
    for (j = 0; j < height; j++)
    {
      final[i][j] = value;
      final[j][i] = value;
      final[j][width - 1 - i] = value;
      final[height - i - 1][j] = value;
    }
    i++;
  }
}
int printBorder(int m[][MAX], int width, int height)
{
  int i, j;
  printf("P2\n%d %d\n255\n", height, width);
  for (i = 0; i < width; i++)
  {
    for (j = 0; j < height; j++)
    {

      printf("%d", m[j][i]);
      if (j + 1 < height)
        printf(" ");
    }

    printf("\n");
  }
}

int main()
{
  int matriz[MAX][MAX];
  int final[MAX][MAX];
  int width, height, border, value;
  int i, j, k, l;
  scanf("%d %d %d %d", &width, &height, &border, &value);
  if (width <= 100 && height <= 100)
  {
    for (i = 0; i < height; i++)
    {
      for (j = 0; j < width; j++)
      {
        matriz[i][j] = 0;
      }
    }
    paintBorder(matriz, width, height, border, value, final);
    printBorder(final, width, height);
  }
  return 0;
}
