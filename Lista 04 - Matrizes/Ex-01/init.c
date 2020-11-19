#include <stdio.h>

int main()
{
  int i;
  int matriz[4];
  double soma;
  for (i = 0; i < 4; i++)
  {
    scanf("%d", &matriz[i]);
  }
  soma = (matriz[0] * matriz[3]) - (matriz[2] * matriz[1]);
  printf("%.2lf\n", soma);

  return 0;
}