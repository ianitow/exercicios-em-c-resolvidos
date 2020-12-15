#include <stdio.h>
#include <math.h>
int main()
{
  int i, j, linha, coluna;
  scanf("%d %d", &linha, &coluna);
  for (i = 2; i <= linha; i++)
  {

    for (j = 1; j <= coluna; j++)
    {

      if (j < i)
      {
        if (j != 1 && j <= coluna)
        {
          printf("-");
        }
        printf("(%d,%d)", i, j);
      }
    }
    printf("\n");
  }

  return 0;
}