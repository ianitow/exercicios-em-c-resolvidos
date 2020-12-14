#include <stdio.h>
int main()
{
  char conceito;
  float nota;
  scanf("%f", &nota);
  if (nota >= 9.0 && nota <= 10)
    conceito = 'A';
  if (nota >= 7.5 && nota < 9.0)
    conceito = 'B';
  if (nota >= 6.0 && nota < 7.5)
    conceito = 'C';
  if (nota >= 0 && nota < 6.0)
    conceito = 'D';
  printf("NOTA = %.1f CONCEITO = %c\n", nota, conceito);
  return 0;
}