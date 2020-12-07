#include <stdio.h>
int main()
{
  float salary, kwSpent, costPerKw, costConsume, costWithDiscount;
  scanf("%f", &salary);
  scanf("%f", &kwSpent);
  costConsume = ((kwSpent / 100) * (0.7 * salary));
  costPerKw = costConsume / kwSpent;
  costWithDiscount = costConsume - costConsume * 0.1;
  printf("Custo por kW: R$ %.2f\nCusto do consumo: R$ %.2f\nCusto com desconto: R$ %.2f\n", costPerKw, costConsume, costWithDiscount);
  return 0;
}