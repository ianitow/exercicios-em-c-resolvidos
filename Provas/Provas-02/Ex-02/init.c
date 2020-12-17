#include <stdio.h>
#include <math.h>
int calculo = 0, calculo2 = 0, coluna;
int fatorial(unsigned int n)
{
  unsigned long int f = 1;
  while (n > 1)
  {
    f *= n--;
  }
  return f;
}
 
int triangulo(int numerador, int denominador)
{
  int i;
  for (i = numerador; i < denominador + 1; i++)
  {
    ;
    for (coluna = 0; coluna <= i; coluna++)
    {
      if (coluna != 0 && i != 0)
      {
        printf(",");
      }
      calculo2 = fatorial(coluna) * (fatorial(i - coluna));
      calculo = fatorial(i) / calculo2;
      printf("%d", calculo);
    }
    printf("\n");
  }
}
int main()
{
  int numerador;
  int denominador;
  int d;
  scanf("%d %d", &numerador, &denominador);
  triangulo(numerador, denominador);
  return 0;
}
