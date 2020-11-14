#include <stdio.h>

int sizeArray(int *array, int range)
{
  int amount = 0;
  int i;
  for (i = 0; i < range; i++)
  {
    if (array[i] == 1)
    {
      amount++;
    }
  }
  return amount;
}
void whoIsPresent(int *array, int range, int minAmountClass)
{
  int i, j = 0;

  int whoIs[range];
  for (i = 0; i < range; i++)
  {
    whoIs[i] = 0;
  }
  for (i = 0; j < range; i++)
  {
    if (array[i] <= 0)
    {
      whoIs[j]++;
    }
    else
    {
      whoIs[j] = 0;
    }
    j++;
  }

  int sizePresent = sizeArray(whoIs, range);

  if (sizePresent < minAmountClass)
  {
    printf("SIM\n");
  }
  else
  {
    printf("NAO\n");
    for (i = range; i >= 0; i--)
    {
      if (whoIs[i] == 1)
      {
        printf("%d\n", i + 1);
      }
    }
  }
}

int main()
{
  int amountStudent, minAmountClass;
  int i;
  while (scanf("%d %d", &amountStudent, &minAmountClass) != EOF)
  {

    if (amountStudent >= 0 && minAmountClass <= 1000)
    {
      int allStudents[amountStudent];
      for (i = 0; i < amountStudent; i++)
      {
        scanf("%d", &allStudents[i]);
      }
      whoIsPresent(allStudents, amountStudent, minAmountClass);
    }
    return 0;
  }
}