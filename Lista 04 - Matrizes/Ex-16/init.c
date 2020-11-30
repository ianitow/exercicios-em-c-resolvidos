#include <stdio.h>
int canPossibleBeHere(int line, int column, int length, int range)
{
  if (((line + length) <= range) && ((column + length) <= range))
    return 1;
  return 0;
}
int isSequenceHere(int logo[11][11], int m[322][322], int indexLine, int indexColumn, int range)
{
  int i, j;
  int isEqual = 1;
  for (i = 0; i < range; i++)
  {
    for (j = 0; j < range; j++)
    {
      if (m[i + indexLine][j + indexColumn] != logo[i][j])
      {
        return 0;
      }
    }
  }
  return isEqual;
}

int main()
{
  int i, j, k;
  int length, range;
  int logo[11][11];
  int matriz[322][322];

  int find = 0;
  scanf("%d", &length);
  for (i = 0; i < length; i++)
  {
    for (j = 0; j < length; j++)
    {
      do
      {
        scanf("%d", &logo[i][j]);
      } while (logo[i][j] > 255 && logo[i][j] < 0);
    }
  }
  scanf("%d", &range);
  for (i = 0; i < range; i++)
  {
    for (j = 0; j < range; j++)
    {
      do
      {
        scanf("%d", &matriz[i][j]);
      } while (matriz[i][j] > 255 && matriz[i][j] < 0);
    }
  }
  for (i = 0; i < range; i++)
  {
    for (j = 0; j < range; j++)
    {
      if (canPossibleBeHere(i, j, length, range))
      {
        if (isSequenceHere(logo, matriz, i, j, length))
        {
          printf("sim\n");
          return 0;
        }
      }
    }
  }
  printf("nao\n");

  return 0;
}