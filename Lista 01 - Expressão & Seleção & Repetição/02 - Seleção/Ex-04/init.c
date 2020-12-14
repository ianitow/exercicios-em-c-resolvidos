#include <stdio.h>
int main()
{
  int valor;
  scanf("%d", &valor);
  if ((valor % 3) == 0 && (valor % 5) == 0)
  {
    printf("O NUMERO E DIVISIVEL\n");
  }
  else
  {
    printf("O NUMERO NAO E DIVISIVEL\n");
  }

  return 0;
}