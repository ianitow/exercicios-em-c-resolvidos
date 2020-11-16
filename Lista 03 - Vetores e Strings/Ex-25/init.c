#include <stdio.h>
#include <ctype.h>
int frequencyASCII(char *str, int asciiNumber)
{
  int i;
  int count = 0;
  for (i = 0; str[i] != '\0'; i++)
  {

    if ((int)tolower(str[i]) == asciiNumber)
    {
      count++;
    }
  }
  return count;
}
int main()
{

  int N, i;
  char str[200];
  scanf("%d", &N);
  while (N)
  {
    int asciiMax = 0;
    int amountAsciiMax = 0;

    for (i = 0; i < N; i++)
    {
      scanf("%*c%[^\n]", str);
      for (i = 97; i <= 122; i++)
      {
        int frequency = frequencyASCII(str, i);
        if (frequency > amountAsciiMax)
        {
          asciiMax = i;
          amountAsciiMax = frequency;
        }
      }
      for (i = 97; i <= 122; i++)
      {
        int frequency = frequencyASCII(str, i);
        if (frequency == amountAsciiMax)
        {
          printf("%c", (char)i);
        }
      }
      printf("\n");
    }
    N--;
  }
  return 0;
}