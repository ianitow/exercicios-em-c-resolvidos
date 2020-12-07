#include <stdio.h>
int main()
{
  float celsius, fahrenheit, inches, centimeters;
  scanf("%f", &fahrenheit);
  scanf("%f", &inches);
  celsius = (5 * (fahrenheit - 32)) / 9;
  centimeters = inches * 25.4;
  printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f", celsius, centimeters);
  return 0;
}