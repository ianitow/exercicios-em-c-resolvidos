#include <stdio.h>

int main()
{
  int N, M, i;
  char cast[99999];
  while (scanf("%d %d", &N, &M) != EOF)
  {
    if ((N <= 0 && M <= 0) || N > 999999999 || M > 999999999)
      return 0;

    sprintf(cast, "%d", N + M);
    for (i = 0; cast[i] != '\0'; ++i)
    {
      if (cast[i] != '0')
      {
        printf("%c", cast[i]);
      }
    }
    printf("\n");
  }

  return 0;
}