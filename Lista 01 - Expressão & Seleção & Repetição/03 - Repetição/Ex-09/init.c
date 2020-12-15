#include <stdio.h>
int main()
{
  int fatorial = 1;
  int index = 1;
  int numero;
  scanf("%d", &numero);
  while (index <= numero)
  {
    fatorial *= index;
    index++;
  }
  printf("%d! = %d\n", numero, fatorial);
  return 0;
}