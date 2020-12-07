#include <stdio.h>
#include <math.h>
int main()
{
  const double JOULE = 9.8067;
  double vKM, vS, a, t, m, s, w;
  scanf("%lf", &m);
  scanf("%lf", &a);
  scanf("%lf", &t);
  m *= 1000;
  vKM = (a * t) * 3.6;
  vS = a * t;
  s = (a * pow(t, 2)) / 2;
  w = (m * pow(vS, 2)) / 2;
  printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", vKM, s, w);
  return 0;
}