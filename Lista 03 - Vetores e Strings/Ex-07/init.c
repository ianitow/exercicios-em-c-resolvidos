#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  char string[10000];
  int i, j, k, matchFoundend, palavrasCount, correct = 0;
  scanf("%d", &palavrasCount);

  for (i = 0; i < palavrasCount; i++)
  {

    scanf("%s%*c", string);

    if (strlen(string) == 3)
    {
      correct = 0;
      if (string[0] == 'o')
        correct++;
      if (string[1] == 'n')
        correct++;
      if (string[2] == 'e')
        correct++;
      if (correct >= 2)
      {
        printf("%d\n", 1);
      }
      correct = 0;
      if (string[0] == 't')
        correct++;
      if (string[1] == 'w')
        correct++;
      if (string[2] == 'o')
        correct++;
      if (correct >= 2)
      {
        printf("%d\n", 2);
      }
    }
    else
    {
      printf("%d\n", 3);
    }
  }

  return 0;
}