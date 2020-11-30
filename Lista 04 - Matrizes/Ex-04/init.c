#include <stdio.h>

int main()
{
  int linha, coluna;
  int i, j;
  do
  {
    scanf("%d", &linha);

  } while (linha < 1 || linha > 10);
  do
  {
    scanf("%d", &coluna);

  } while (coluna < 1 || coluna > 10);
  for (i = 0; i < linha; i++)
  {
    printf("linha %d: ", i + 1);
    for (j = 0; j < coluna; j++)
    {
      int n;
      scanf("%d", &n);
      printf("%d", n);
      if (j + 1 < coluna)
        printf(",");
    }
    printf("\n");
  }

  return 0;
}