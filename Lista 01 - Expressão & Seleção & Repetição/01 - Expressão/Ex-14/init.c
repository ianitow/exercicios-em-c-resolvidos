#include <stdio.h>
int main()
{
  int valor, num1, num2, num3, novo;
  scanf("%d", &valor);
  num3 = valor % 10;
  valor /= 10;
  num2 = valor % 10;
  valor /= 10;
  num1 = valor;
  novo = (num1 + (num2 * 3) + (num3 * 5)) % 7;
  printf("O NOVO NUMERO E = %d%d%d%d\n", num1, num2, num3, novo);
  return 0;
}