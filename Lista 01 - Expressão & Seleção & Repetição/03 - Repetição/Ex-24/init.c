#include <stdio.h>
#include <math.h>

int main()
{
  int num1, num2, num3, i, reseta = 0, mmc = 1;

  scanf("%d %d %d", &num1, &num2, &num3);
  i = 2;
  printf("%d %d %d", num1, num2, num3);
  while (1)
  {
    if (num1 % i == 0)
    {
      num1 /= i;
      reseta = 1;
    }
    if (num2 % i == 0)
    {
      num2 /= i;
      reseta = 1;
    }
    if (num3 % i == 0)
    {
      num3 /= i;
      reseta = 1;
    }
    if (reseta == 1)
    {
      printf(" :%i\n", i);
      mmc = i * mmc;
      i = 2;
      reseta = 0;
      if (num1 * num2 * num3 != 1)
      {
        printf("%d %d %d", num1, num2, num3);
      }
    }

    else
    {
      i++;
    }
    if (num1 == 1 && num2 == 1 && num3 == 1)
    {
      break;
    }
  }
  printf("MMC: %d\n", mmc);
  return 0;
}