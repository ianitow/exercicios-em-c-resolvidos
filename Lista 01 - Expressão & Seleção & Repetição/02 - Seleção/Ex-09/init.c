#include <stdio.h>
int main()
{
  int ano, bissexto = 0;
  scanf("%d", &ano);
  if ((ano % 4) == 0 && !(ano % 100) == 0)
  {
    bissexto = 1;
  }
  else
  {
    if ((ano % 100) == 0 && (ano % 400) == 0)
    {
      bissexto = 1;
    }
    else
    {
      bissexto = 0;
    }
  }
  if (bissexto == 1)
  {
    printf("ANO BISSEXTO\n");
  }
  else
  {
    printf("ANO NAO BISSEXTO\n");
  }
  return 0;
}