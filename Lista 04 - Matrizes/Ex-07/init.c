#include <stdio.h>
#include <string.h>
int sumAllArray(int *arr)
{
  int i, sum = 0;
  for (i = 0; i < 7; i++)
    sum += arr[i];
  return sum;
}
int canPossibleHourglass(int line, int column)
{
  if (((line + 2) < 6) && ((column + 2) < 6))
    return 1;
  return 0;
}

void getHourglassByIndex(int m[6][6], int line, int column, int *hourglass)
{
  int final[7];
  int i, j;
  for (j = 0, i = 0; i < 3; i++, j++)
  {
    final[j] = m[line][column + j];
  }
  final[j] = m[line + 1][column + 1];
  j++;
  for (i = 0; i < 3; i++, j++)
  {
    final[j] = m[line + 2][column + i];
  }
  for (i = 0; i < 7; i++)
  {
    hourglass[i] = final[i];
  }
}

void clearBuffer(int *arr)
{
  int i;
  for (i = 0; i < 7; i++)
  {
    arr[i] = 0;
  }
}

int main()
{
  int i, j, k = 0;
  int matriz[6][6];
  int currentHourglass[6];
  int highValue;
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  for (i = 0; i < 7; i++)
  {
    for (j = 0; j < 7; j++)
    {
      clearBuffer(currentHourglass);
      if (canPossibleHourglass(i, j))
      {
        getHourglassByIndex(matriz, i, j, currentHourglass);
        int sum = sumAllArray(currentHourglass);
        if (sum > highValue)
        {
          highValue = sum;
        }
        if (k == 0)
        {
          highValue = sum;
        }
        k = 1;
      }
    }
  }
  printf("%d\n", highValue);

  return 0;
}