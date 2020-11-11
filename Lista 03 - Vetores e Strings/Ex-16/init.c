#include <stdio.h>

char *imprimeAte(int n, char *str)
{
  static char s[499];
  int i;

  for (i = 0; i < n; i++)
  {
    if (i == n)
    {
      break;
    }
    s[i] = str[i];
  }
  return s;
}

int main()
{
  char frase[499];
  char *clone;
  int N, i, qntd;
  scanf("%d", &N);
  if (N >= 1 && N <= 20)
  {
    for (i = 0; i < N; i++)
    {
      scanf("%d%*c", &qntd);
      scanf("%[^\n]%*c", frase);
      clone = imprimeAte(qntd, frase);
      printf("%s\n", clone);
      *clone = '\0';
    }
  }
  return 0;
}