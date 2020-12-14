#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, delta, x1, x2;
  scanf("%f %f %f", &a, &b, &c);
  delta = (b * b) - (4 * a * c);
  if (delta > 0)
  {

    printf("RAIZES DISTINTAS\n");
    if ((-b + sqrt(delta)) / (2 * a) < (-b - sqrt(delta)) / (2 * a))
    {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else
    {
      x2 = (-b + sqrt(delta)) / (2 * a);
      x1 = (-b - sqrt(delta)) / (2 * a);
    }
    printf("X1 = %.2f\nX2 = %.2f\n", x1, x2);
  }
  else
  {
    if (delta < 0)
    {
      printf("RAIZES IMAGINARIAS\n");
    }
    else
    {
      printf("RAIZ UNICA\n");
      x1 = ((-b + sqrt(delta)) / (2 * a));
      printf("X1 = %.2f\n", x1);
    }
  }

  return 0;
}