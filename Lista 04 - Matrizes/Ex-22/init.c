#include <stdio.h>

const int SIZE_SUDOKU = 9;

int isUniqueOccurrence(int *array, int N);
int verifyLines(int m[SIZE_SUDOKU][SIZE_SUDOKU]);
int verifyColumns(int m[SIZE_SUDOKU][SIZE_SUDOKU]);
int getNumbersInSquare(int *final, int m[SIZE_SUDOKU][SIZE_SUDOKU], int step);

int verifySquares(int m[SIZE_SUDOKU][SIZE_SUDOKU]);

int main()
{
  int i, j;
  int matriz[SIZE_SUDOKU][SIZE_SUDOKU];
  for (i = 0; i < 9; i++)
  {
    for (j = 0; j < 9; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  if (verifyLines(matriz) && verifyColumns(matriz) && verifySquares(matriz))

  {
    printf("valido\n");
  }
  else
  {
    printf("invalido\n");
  }

  return 0;
}
int verifyLines(int m[SIZE_SUDOKU][SIZE_SUDOKU])
{
  int i, j;
  for (i = 0; i < 9; i++)
  {
    if (isUniqueOccurrence(m[i], SIZE_SUDOKU) == 0)
    {
      return 0;
    }
  }
  return 1;
}
int verifyColumns(int m[SIZE_SUDOKU][SIZE_SUDOKU])
{
  int i = 0, j = 0;
  while (j < SIZE_SUDOKU)
  {
    int valuesInColumn[SIZE_SUDOKU];
    for (i = 0; i < SIZE_SUDOKU; i++)
    {
      valuesInColumn[i] = m[i][j];
    }

    if (isUniqueOccurrence(valuesInColumn, SIZE_SUDOKU) == 0)
    {
      return 0;
    }
    j++;
  }
  return 1;
}
int verifySquares(int m[SIZE_SUDOKU][SIZE_SUDOKU])
{
  int i = 0, j = 0;
  int numbersInSquare[SIZE_SUDOKU];
  for (i = 0; i < 3; i++)
  {
    getNumbersInSquare(numbersInSquare, m, i);
    if (isUniqueOccurrence(numbersInSquare, SIZE_SUDOKU) == 0)
    {
      return 0;
    }
  }

  return 1;
}

int getNumbersInSquare(int *final, int m[SIZE_SUDOKU][SIZE_SUDOKU], int step)
{
  int i, j, k = 0;
  for (i = 3 * step; i < 3 * (step + 1); i++)
  {
    for (j = 3 * step; j < 3 * (step + 1); j++)
    {
      final[k] = m[i][j];
      k++;
    }
  }
}

int isUniqueOccurrence(int *array, int N)
{
  int i = 0, j = 0, k = 0;
  int MAX = -1;
  for (i = 0; i < N; i++)
  {
    if (array[i] > MAX)
    {
      MAX = array[i];
    }
  }
  int v[MAX];

  for (i = 0; i <= MAX; i++)
  {
    v[i] = 0;
  }

  for (i = 0; i < N; i++)
  {
    v[array[i]]++;
  }
  for (i = 0; i < N; i++)
  {
    if (v[i] > 1)
    {
      return 0;
    }
  }
  return 1;
}