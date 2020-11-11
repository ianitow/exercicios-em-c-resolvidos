#include <stdio.h>

int main()
{
  int N, i, value;
  int maiorValor = -1, menorValor = 999;
  scanf("%d", &N);
  if (N >= 1 && N <= 1000)
  {
    int V[N];
    for (i = 0; i < N; i++)
    {
      scanf("%d", &value);
      V[i] = value;
      if (value > maiorValor)
      {
        maiorValor = value;
      }
      if (value < menorValor)
      {
        menorValor = value;
      }
      printf("%d", value);
      if (i + 1 <= N)
      {
        printf(" ");
      }
    }
    printf("\n");
    for (i = N - 1; i >= 0; i--)
    {
      printf("%d", V[i]);
      if (i - 1 >= 0)
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  printf("%d\n%d\n", maiorValor, menorValor);
  return 0;
}
