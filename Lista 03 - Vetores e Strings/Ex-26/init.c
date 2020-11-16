#include <stdio.h>

void str_clean(char *str, char *elim)
{
  int i, j, k, happened = 0;
  do
  {
    happened = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
      for (j = 0; elim[j] != '\0'; j++)
      {
        if ((char)str[i] == (char)elim[j])
        {
          happened = 1;
          for (k = i; str[k] != '\0'; k++)
          {
            str[k] = str[k + 1];
            happened == 1;
          }
        }
      }
    }
  } while (happened);
}
int main()
{
  char str[256]; // string original
  char clr[256]; // lista de caracteres indesejados
  scanf("%[^\n]", str);
  scanf("\n%[^\n]", clr);
  str_clean(str, clr);
  printf("%s\n", str);
  return 0;
}