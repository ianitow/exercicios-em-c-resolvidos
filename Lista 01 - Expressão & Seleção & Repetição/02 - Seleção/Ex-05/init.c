#include <stdio.h>
int main()
{
  float totalHoras, horaCinco, horaTres, totalPagar;
  scanf("%f", &totalHoras);
  horaTres = ((int)totalHoras / 3);
  totalPagar = horaTres * 10;
  horaCinco = totalHoras - horaTres * 3;
  totalPagar += horaCinco * 5;
  printf("O VALOR A PAGAR E = %.2f\n", totalPagar);
  return 0;
}