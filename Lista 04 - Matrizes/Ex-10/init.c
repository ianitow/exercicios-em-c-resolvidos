#include <stdio.h>

const int MAX = 1000;

int main()
{
  int range, i, j, sum = 0;
  scanf("%d", &range);
  if (range >= 1 && range <= MAX)
  {
    int matriz[range][range];
    int copy[range][range];
    for (i = 0; i < range; i++)
    {
      for (j = 0; j < range; j++)
      {
        scanf("%d", &matriz[i][j]);
      }
      sum += matriz[i][i];
    }
    for (i = 0; i < range; i++)
    {
      for (j = 0; j < range; j++)
      {
        copy[j][i] = matriz[i][j];
        matriz[i][j] *= sum;
      }
    }
    for (i = 0; i < range; i++)
    {
      for (j = 0; j < range; j++)
      {
        matriz[i][j] += copy[i][j];
        printf("%d", matriz[i][j]);
        if (j + 1 < range)
          printf(" ");
      }

      printf("\n");
    }
    return 0;
  }
}