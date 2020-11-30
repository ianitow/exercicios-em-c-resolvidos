#include <stdio.h>

const int MAX = 101;
int main()
{
  int matriz[MAX][MAX];
  int range, i, j;
  int sum;
  scanf("%d", &range);
  for (i = 0; i <= range; i++)
  {
    for (j = 0; j <= range; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  for (i = 0; i < range; i++)
  {
    for (j = 0; j < range; j++)
    {
      sum = matriz[i][j] + matriz[i + 1][j] + matriz[i + 1][j + 1] + matriz[i][j + 1];
      if (sum >= 2)
        printf("S");
      else
        printf("U");
      sum = 0;
    }
    printf("\n");
  }

  return 0;
}