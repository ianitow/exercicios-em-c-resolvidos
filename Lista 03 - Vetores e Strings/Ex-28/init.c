#include <stdio.h>
#include <ctype.h>

void printDancingSetence(char *string)
{
  int i;
  int lastIsUpper = 0;
  for (i = 0; string[i] != '\0'; i++)
  {
    if (string[i] == ' ')
    {
      printf(" ");
      continue;
    }
    if (lastIsUpper == 1)
    {
      printf("%c", tolower(string[i]));
      lastIsUpper = 0;
    }
    else
    {
      printf("%c", toupper(string[i]));
      lastIsUpper = 1;
    }
  }
}

int main()
{
  char str[50];
  while (scanf("%[^\n]%*c", str) != EOF)
  {
    printDancingSetence(str);
    printf("\n");
  }

  return 0;
}