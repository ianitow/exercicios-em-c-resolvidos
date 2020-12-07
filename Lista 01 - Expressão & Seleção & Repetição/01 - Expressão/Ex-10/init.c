#include <stdio.h>
#include <math.h>
int main()
{
  double l1, l2, l3, t, a;
  scanf("%lf", &l1);
  scanf("%lf", &l2);
  scanf("%lf", &l3);
  t = (l1 + l2 + l3) / 2;
  a = sqrt(t * ((t - l1) * (t - l2) * (t - l3)));
  printf("A AREA DO TRIANGULO E = %.2f\n", a);
  return 0;
}