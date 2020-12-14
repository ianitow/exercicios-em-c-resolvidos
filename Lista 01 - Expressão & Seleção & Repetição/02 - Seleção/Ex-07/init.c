#include <stdio.h>
int main()
{
  float salario, reajuste;
  scanf("%f", &salario);
  if (salario > 300)
    reajuste = salario + (salario * 0.3);
  else
    reajuste = salario + (salario * 0.5);
  printf("SALARIO COM REAJUSTE = %.2f\n", reajuste);
  return 0;
}