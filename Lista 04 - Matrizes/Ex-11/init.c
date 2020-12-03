#include <stdio.h>

int main()
{
  int CODE_BODY = 1111;
  int CODE_HEAD = 4;
  int CODE_FEET = 8;
  int CODE_HANDS = 0;
  int m[200][200];
  int i, j, largura, altura;
  int wally = 0;
  scanf("%d %d", &largura, &altura);
  if (largura >= 3 && altura >= 3)
  {
    for (i = 0; i < largura; i++)
    {
      for (j = 0; j < altura; j++)
      {
        scanf("%d", &m[i][j]);
      }
    }
    for (i = 0; i < largura; i++)
    {
      for (j = 0; j < altura; j++)
      {
        wally = 0;
        if (m[i][j] == CODE_BODY)
        {
          if (j == 0)
          {
            if (m[i][altura - 1] == CODE_HANDS)
              wally++;
            if (m[i][j + 1] == CODE_HANDS)
              wally++;
          }
          else if (j == altura - 1)
          {
            if (m[i][0] == CODE_HANDS)
              wally++;
            if (m[i][j - 1] == CODE_HANDS)
              wally++;
          }
          else
          {
            if (m[i][j + 1] == CODE_HANDS)
              wally++;
            if (m[i][j - 1] == CODE_HANDS)
              wally++;
          }

          if (i == 0)
          {
            if (m[largura - 1][j] == CODE_HEAD)
              wally++;
            if (m[i + 1][j] == CODE_FEET)
              wally++;
          }
          else if (i == largura - 1)
          {
            if (m[i - 1][j] == CODE_HEAD)
              wally++;
            if (m[0][j] == CODE_FEET)
              wally++;
          }
          else
          {
            if (m[i - 1][j] == CODE_HEAD)
              wally++;
            if (m[i + 1][j] == CODE_FEET)
              wally++;
          }

          if (wally == 4)
          {
            printf("%d %d\n", i, j);
            return 0;
          }
        }
      }
    }
  }
  printf("WALLY NAO ESTA NA MATRIZ\n");
  return 0;
}