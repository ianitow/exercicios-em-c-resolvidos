#include <stdio.h>
int main()
{
  int index = 1, teste = 0;
  double fahrenheit, celsius;
  scanf("%d", &teste);

  for (index = 1; index <= teste; index++)
  {
    scanf("%lf", &fahrenheit);
    celsius = ((fahrenheit - 32) * 5) / 9;
    printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", fahrenheit, celsius);
  }

  return 0;
}