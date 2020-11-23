#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void getLowerNumbersInSequence(const char num[], int totalNumeros, int qntd_rest)
{
  char digitos[100000];
  int apagar = totalNumeros - qntd_rest;
  int i, j = 0;

  for (i = 0; i < totalNumeros; i++)
  {

    while (j > 0 && num[i] > digitos[j - 1] && apagar > 0)
    {
      j--;
      apagar--;
      digitos[j] = '\0';
    }
    digitos[j] = num[i];
    j++;
  }
  for (i = 0; i < qntd_rest; i++)
  {
    printf("%c", digitos[i]);
  }
  printf("\n");
}
int main()
{
  char digitos[100000 + 1];
  int i;
  int totalNumeros;
  int qntdRest;
  do
  {
    scanf("%d %d", &totalNumeros, &qntdRest);
    getchar();
    if (totalNumeros == 0 && qntdRest == 0)
    {
      break;
    }

    for (i = 0; i < totalNumeros; i++)
    {
      scanf("%c", &digitos[i]);

      if (digitos[i] == '\n')
      {
        digitos[i] = '\0';
        break;
      }
    }
    getLowerNumbersInSequence(digitos, totalNumeros, qntdRest);
  } while ((totalNumeros != 0) && (qntdRest != 0));

  return 0;
}
