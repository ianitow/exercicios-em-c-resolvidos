#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  int j, i, qntd;
  int range = 0;
  char string[100];

  char reverse[100];
  scanf("%d%*c", &qntd);

  if (qntd >= 1 && qntd <= pow(10, 4))
  {
    for (j = 0; j < qntd; j++)
    {
      range = 0;
      scanf("%[^\n]%*c", string);
      for (i = 0; string[i] != '\0'; i++)
      {
        if (((int)string[i] >= 65 && (int)string[i] <= 90) || ((int)string[i] >= 97 && (int)string[i] <= 122))
        {
          string[i] += 3;
        }
        range++;
      }
      for (i = range - 1; i >= 0; i--)
      {
        reverse[(range - 1) - i] = string[i];
      }
      for (i = ceil(range / 2); i < range; i++)
      {
        reverse[i]--;
      }
      reverse[i] = '\0';
      printf("%s\n", reverse);
    }
  }

  return 0;
}