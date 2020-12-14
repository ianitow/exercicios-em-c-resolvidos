#include <stdio.h>
int main()
{

  int a, b, c, resultado, quadrado;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a >= 10 && a > 0 || b >= 10 || c >= 10)
  {
    printf("DIGITO INVALIDO\n");
    return 0;
  }
  else
  {
    resultado = (a * 10 + b) * 10 + c;
    quadrado = resultado * resultado;

    printf("%d, %d\n", resultado, quadrado);
  }

  return 0;
}