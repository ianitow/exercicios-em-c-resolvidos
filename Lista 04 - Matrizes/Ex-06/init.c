#include <stdio.h>

int main()
{
  float matriz[2][2];
  float quadrado[2][2];
  int i, j, k = 0, l = 0, m = 0;

  for (i = 0; i < 2; i++)
  {

    for (j = 0; j < 2; j++)
    {
      quadrado[j][i] = 0;
      scanf("%f", &matriz[i][j]);
      k++;
    }
  }
  k = 0;
  while (k <= 1)
  {
    l = 0;
    for (i = 0; i < 2; i++)
    {
      m = 0;
      for (j = 0; j < 2; j++)
      {
        quadrado[k][l] += matriz[k][j] * matriz[m][i];

        m = 1;
      }
      l++;
    }

    k++;
  }
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      if (j > 0)
        printf(" ");
      printf("%.3lf", quadrado[i][j]);
    }
    printf("\n");
  }
  return 0;
}
