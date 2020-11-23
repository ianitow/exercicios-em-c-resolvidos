#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int *numberVowels(char *string, int *amountVowels)
{
  int i;

  for (i = 0; i < string[i] != '\0'; i++)
  {
    switch (tolower(string[i]))
    {
    case 'a':
      amountVowels[0]++;
      break;
    case 'e':
      amountVowels[1]++;
      break;
    case 'i':
      amountVowels[2]++;
      break;
    case 'o':
      amountVowels[3]++;
      break;
    case 'u':
      amountVowels[4]++;
      break;
    }
  }
  return amountVowels;
}
int isValidPhrase(char *phrase)
{
  int i;
  int qntdDot = 0;
  for (i = 0; phrase[i] != '\0'; i++)
  {
    if (phrase[i] == ';')
      qntdDot++;
  }
  if (qntdDot == 1)
  {
    return 1;
  }
  return 0;
}
void clearBufferInt(int *value, int range)
{
  int i;
  for (i = 0; i < range; i++)
  {
    value[i] = 0;
  }
}

int main()
{
  char stringComplete[2000];

  char firstPhrase[1000];
  char lastPhrase[1000];
  int vowelsFirstPhrase[5], vowelsLastPhrase[5];
  double sum = 0;
  int i;
  while (scanf("%[^\n]%*c", stringComplete) != EOF)
  {
    sum = 0;
    clearBufferInt(vowelsFirstPhrase, 5);
    clearBufferInt(vowelsLastPhrase, 5);

    if (isValidPhrase(stringComplete))
    {
      strcpy(firstPhrase, strtok(stringComplete, ";"));
      strcpy(lastPhrase, strtok(NULL, "\n"));

      if (firstPhrase == NULL || lastPhrase == NULL)
      {

        break;
      }
      numberVowels(firstPhrase, vowelsFirstPhrase);
      numberVowels(lastPhrase, vowelsLastPhrase);

      for (i = 0; i < 5; i++)
      {
        sum += pow(vowelsFirstPhrase[i] - vowelsLastPhrase[i], 2);
      }
      if (sum > 0)
      {
        sum = sqrt(sum);
      }

      printf("(");
      for (i = 0; i < 5; i++)
      {
        printf("%d", vowelsFirstPhrase[i]);
        if (i + 1 < 5)
          printf(",");
      }
      printf(")\n");
      printf("(");
      for (i = 0; i < 5; i++)
      {
        printf("%d", vowelsLastPhrase[i]);
        if (i + 1 < 5)
          printf(",");
      }
      printf(")\n");
      printf("%.2lf\n", sum);
    }
    else
    {
      printf("FORMATO INVALIDO!\n");
    }
  }

  return 0;
}