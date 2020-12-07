#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, d, e, f, x, y;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  scanf("%f", &e);
  scanf("%f", &f);
  x = ((e * c) - (f * b)) / ((a * e) - (b * d));
  y = (f - (d * x)) / e;
  printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", x, y);
  return 0;
}