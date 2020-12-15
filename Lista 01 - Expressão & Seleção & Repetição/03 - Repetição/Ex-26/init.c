#include <stdio.h>

void numero_perfeito(int a)
{
  int i, soma = 1;
  printf("%d = 1", a);
  for (i = 2; i < a; i++)
  {

    if (a % i == 0)
    {
      if (i <= a)
      {
        printf(" + ");
      }
      soma += i;
      printf("%d", i);
    }
  }
  printf(" = %d ", soma);
  if (soma == a)
  {

    printf("(NUMERO PERFEITO)");
  }
  else
  {

    printf("(NUMERO NAO E PERFEITO)");
  }
  printf("\n");
}
int main()
{
  int a;
  scanf("%d", &a);
  if (a > 0)
  {
    numero_perfeito(a);
  }
  return 0;
}