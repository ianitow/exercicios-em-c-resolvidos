#include <stdio.h>

int wallyWasHere(int arr[200][200], int x, int y, int n, int m)
{
  int CODE_HEAD = 4;
  int CODE_BODY = 1111;
  int CODE_FEET = 8;
  int CODE_HANDS = 0;

  int left_hand = 0;
  int right_hand = 0;
  int head = 0;
  int body = 0;
  int feet = 0;
  int cY = y, cX = x;
  if (arr[y][x] == CODE_BODY)
  {
    body = 1;
    if (x + 1 > n)
    {
      cX = -1;
    }
    if (arr[y][cX + 1] == CODE_HANDS)
    {
      right_hand = 1;
    }
    cX = x;
    if (cX - 1 < 0)
    {
      cX = n;
    }
    if (arr[y][cX - 1] == CODE_HANDS)
    {
      left_hand = 1;
    }
    cY = y;
    if (cY - 1 < 0)
    {
      cY = m;
    }
    if (arr[cY - 1][x] == CODE_HEAD)
    {
      head = 1;
    }
  }

  return head && body && feet && right_hand && left_hand;
}
int main()
{
  int matriz[200][200];
  int i, j, N, M;
  scanf("%d %d", &N, &M);
  if (N >= 3 && M >= 3)
  {
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
      {
        scanf("%d", &matriz[i][j]);
      }
    }
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
      {
        if (wallyWasHere(matriz, j, i, N, M))
        {
          printf("%d %d\n", i, j);
          return 0;
        }
      }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");
  }

  return 0;
}