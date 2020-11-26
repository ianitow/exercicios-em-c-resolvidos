#include <stdio.h>
#include <string.h>

int main()
{
  //1 ≤ B ≤ E ≤ 12221
  int C, i, j, k, B, E;
  int aux, aux2;
  char str[12221];
  scanf("%d", &C);

  for (i = 0; i < C; i++)
  {

    scanf("%d %d", &B, &E);

    if ((B >= 0 && B <= E) && (E >= B && E <= 12221))
    {

      for (j = B; j <= E; j++)
      {
        printf("%d", j);
      }
      for (j = E; j >= B; j--)
      {
        sprintf(str, "%d", j);
        for (k = strlen(str) - 1; k >= 0; k--)
        {
          printf("%c", str[k]);
        }
      }
      printf("\n");
    }
  }

  return 0;
}