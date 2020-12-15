#include <stdio.h>
int main()
{
  int numero1, numero2;
  int index = 1;
  scanf("%d %d", &numero1, &numero2);

  if ((numero1 % 2) == 0)
  {
    while (index <= numero2)
    {
      printf("%d ", numero1);
      numero1 += 2;
      index++;
    }
    printf("\n");
  }
  else
  {
    printf("O PRIMEIRO NUMERO NAO E PAR\n");
  }

  return 0;
}