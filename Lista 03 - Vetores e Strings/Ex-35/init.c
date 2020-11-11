#include <stdio.h>

/*
Faça um programa que leia 2 conujuntos (A e B) válidos, sem elementos repetidos, cada um com no
mínimo 1 e no máximo 100 elementos, e imprima A ∪ B e A ∩ B.

Não se esqueça que um conjunto válido não permite a existência de elementos repetidos.

*/

void fillArray(int *elements, int range)
{
  int i;
  for (i = 0; i <= range; i++)
  {
    elements[i] = -1;
  }
}

int sizeArray(int *elements)
{
  int i;
  for (i = 0; elements[i] > -1; i++)
    ;

  return i;
}
int isElementInside(int *array, int el)
{
  int i;
  for (i = 0; i < sizeArray(array); i++)
  {
    if (array[i] == el)
    {
      return 1;
    }
  }
  return 0;
}

void printUnique(int *elements)
{
  int printed[201];
  int i, j;
  printf("(");
  fillArray(printed, 201);
  for (i = 0; elements[i] != -1; i++)
  {

    if (isElementInside(printed, elements[i]) == 0)
    {
      printed[sizeArray(printed)] = elements[i];
    }
  }
  if (sizeArray(printed) >= 1)
  {
    for (i = 0; printed[i] != -1; i++)
    {
      printf("%d", printed[i]);
      if (i + 1 < sizeArray(printed))
        printf(",");
    }
  }

  printf(")\n");
}

void printEqual(int *elementsA, int *elementsB)
{
  int i;
  int j;
  int equal[201];
  printf("(");
  fillArray(equal, 201);
  for (i = 0; i < sizeArray(elementsA); i++)
  {
    for (j = 0; j < sizeArray(elementsB); j++)
    {
      if (elementsA[i] == elementsB[j])
      {
        equal[sizeArray(equal)] = elementsA[i];
      }
    }
  }
  if (sizeArray(equal) > 0)
  {
    for (i = 0; equal[i] != -1; i++)
    {
      printf("%d", equal[i]);
      if (i + 1 < sizeArray(equal))
        printf(",");
    }
  }
  printf(")\n");
}

int main()
{
  const int RANGE_ARRAY = 101;
  int i, amountA = -1, amountB = -1;
  int currentValue = -1;
  int elementsA[RANGE_ARRAY], elementsB[RANGE_ARRAY], allElements[RANGE_ARRAY * 2];

  while (amountA <= 0 || amountA > 100)

    scanf("%d", &amountA);

  while (amountB <= 0 || amountB > 100)

    scanf("%d", &amountB);

  fillArray(elementsA, RANGE_ARRAY);
  fillArray(allElements, RANGE_ARRAY);
  fillArray(elementsB, RANGE_ARRAY);

  for (i = 0; i < amountA; i++)
  {
    while (1)
    {
      scanf("%d", &currentValue);
      if (isElementInside(elementsA, currentValue) == 0)
      {
        elementsA[i] = currentValue;
        break;
      }
    }
    currentValue = -1;

    allElements[i] = elementsA[i];
  }

  for (i = 0; i < amountB; i++)
  {
    while (1)
    {
      scanf("%d", &currentValue);
      if (isElementInside(elementsB, currentValue) == 0)
      {
        elementsB[i] = currentValue;
        break;
      }
    }
    allElements[i + amountA] = elementsB[i];
  }

  printUnique(allElements);
  printEqual(elementsA, elementsB);

  return 0;
}