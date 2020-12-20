#include <stdio.h>
 
int main()
 
{
  int LINHAS, bissimetrica = 1;
  int i, j, k = 0;
  scanf("%d", &LINHAS);
 
  if ((LINHAS >= 1 && LINHAS <= 10))
  {
    int matriz[LINHAS][LINHAS];
 
    for (i = 0; i < LINHAS; i++)
    {
      for (j = 0; j < LINHAS; j++)
      {
        scanf("%d", &matriz[i][j]);
      }
    }
    for (i = 0; i < LINHAS; i++)
    {
      for (j = 0; j < LINHAS; j++)
      {
 
        if (matriz[i][j] != matriz[j][i])
        {
          bissimetrica = 0;
        }
      }
    }
    for (i = 0; i < LINHAS; i++)
    {
      for (j = 0; j < LINHAS; j++)
      {
 
        if (matriz[i][j] != matriz[(LINHAS - 1) - i][(LINHAS - 1) - j])
        {
          bissimetrica = 0;
        }
      }
    }
 
    if (bissimetrica)
    {
      printf("bissimetrica");
    }
    else
    {
      printf("nao bissimetrica");
    }
    printf("\n");
  }
  else
  {
    printf("dimensao invalida");
    printf("\n");
  }
 
  return 0;
}