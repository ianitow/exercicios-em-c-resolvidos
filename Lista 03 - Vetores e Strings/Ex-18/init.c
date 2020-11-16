#include <stdio.h>
#include <string.h>

int main()
{
  //1 ≤ B ≤ E ≤ 12221
  int C, i, j, k, B, E;
  int aux, aux2;
  scanf("%d", &C);

  for (i = 0; i < C; i++)
  {

    scanf("%d %d", &B, &E);

    if ((B >= 1 && B <= E) && (E >= B && E <= 12221))
    {

      for (j = B; j <= E; j++)
      {
        printf("%d", j);
      }
      for (j = E; j >= B; j--)
      {
        aux = j;
        while (aux)
        {
          aux2 = aux % 10;
          aux = aux / 10;
          printf(" %d", aux2);
        }
      }
      printf("\n");
    }
  }

  return 0;
}