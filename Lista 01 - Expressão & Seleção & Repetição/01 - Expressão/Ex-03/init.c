#include <stdio.h>
#define PI 3.14159
int main()
{
  float raio, height, areaTotal, areaCirculo, areaLateral, custoTotal;
  scanf("%f", &raio);
  scanf("%f", &height);
  areaCirculo = PI * (raio * raio);
  areaLateral = (2 * PI * raio * height);
  areaTotal = (2 * areaCirculo + areaLateral) * 100;
  printf("O VALOR DO CUSTO E = %.2f\n", areaTotal);
  return 0;
}