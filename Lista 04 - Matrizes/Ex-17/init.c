#include <stdio.h>

int amountWon(int bet[7], const int winner[7])
{
  int i, j, hit = 0;
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (bet[i] == winner[j])
      {
        hit++;
      }
    }
  }
  return hit;
}

int main()
{
  int winners[4] = {0, 0, 0};
  int results[50000][7];
  int resultWinner[7];
  int i, j;
  int range;
  scanf("%d", &range);
  for (i = 0; i < range + 1; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (i + 1 == range + 1)
      {
        scanf("%d", &resultWinner[j]);
      }
      else
      {
        scanf("%d", &results[i][j]);
      }
    }
  }
  for (i = 0; i < range; i++)
  {
    int amount = amountWon(results[i], resultWinner);

    if (amount == 4)
    {
      winners[0]++;
    }
    else if (amount == 5)
    {
      winners[1]++;
    }
    else if (amount == 6)
    {
      winners[2]++;
    }
  }
  for (i = 2; i >= 0; i--)
  {
    if (winners[i] == 0)
    {
      printf("Nao houve acertador para ");
    }
    else
    {
      printf("Houve %d acertador(es) da ", winners[i]);
    }
    if (i == 0)
      printf("quadra");
    if (i == 1)
      printf("quina");
    if (i == 2)
      printf("sena");
    printf("\n");
  }

  return 0;
}
