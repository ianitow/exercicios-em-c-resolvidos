#include <stdio.h>

int main()
{
  int T, i = 0;
  char firstPhrase[9999], lastPhrase[9999];
  long int changed = 0;
  scanf("%d", &T);
  while (T--)
  {
    if (T <= 100)
    {
      changed = 0;
      i = 0;
      scanf("%s", firstPhrase);
      scanf("%s", lastPhrase);
      while (1)
      {
        if (firstPhrase[i] == '\0')
          break;
        if (firstPhrase[i] == lastPhrase[i])
        {
          i++;
        }
        else
        {
          if ((int)++firstPhrase[i] == 123)
          {
            firstPhrase[i] = 'a';
          }

          changed++;
        }
      }
      printf("%lu\n", changed);
    }
  }

  return 0;
}
