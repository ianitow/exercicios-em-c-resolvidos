#include <stdio.h>
#include <string.h>

#include <ctype.h>
int main()
{
  char str[100];
  char *trk;

  while (scanf("%[^\n]%*c", str) != EOF)
  {
    int amountFirst = 0;
    char oldLetter;

    trk = strtok(str, " ");
    int find = 0;
    while (trk != NULL)
    {

      if (tolower(oldLetter) == tolower(trk[0]))
      {
        if (find == 0)
        {
          find = 1;
          amountFirst++;
        }
      }
      else
      {
        find = 0;
      }

      oldLetter = trk[0];

      trk = strtok(NULL, " ");
    }

    printf("%d", amountFirst);
    printf("\n");
  }
  return 0;
}
