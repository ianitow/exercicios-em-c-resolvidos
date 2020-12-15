#include <stdio.h>

int main()
{
  int index, numeroMax, n, inicio = 1;
  scanf("%d", &numeroMax);
  if (numeroMax > 0)
  {
    for (n = 1; n <= numeroMax; n++)
    {
      printf("%d*%d*%d = %d", n, n, n, inicio);
      for (index = 1; index < n; index++)
      {
        printf("+%d", inicio + 2 * index);
      }
      inicio = inicio + 2 * n;
      printf("\n");
    }
  }

  return 0;
}