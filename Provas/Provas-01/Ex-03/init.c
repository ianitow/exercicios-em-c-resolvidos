#include <stdio.h>
#include <math.h>
int main()
{
  double x1, x2;
  int dimensao_L = 0, a = 0, b = 0, c = -1, delta = 0;
 
  scanf("%d %d %d %d", &dimensao_L, &a, &b, &c);
  if (c < 0)
  {
    c = b;
    b = a;
    a = dimensao_L;
    dimensao_L = 0;
  }
  if (a == 0)
  {
    return 0;
  }
 
  delta = (b * b) - (4 * a * c);
  if (delta < 0)
  {
    printf("POSICOES IMAGINARIAS\n");
    return 0;
  }
 
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);
 
  printf("POSICOES: x1=%.2lf e x2=%.2f ", x1, x2);
 
  if ((x1 > dimensao_L / 2 || x2 > dimensao_L / 2))
  {
    printf("(FORA DO EXPERIMENTO)");
  }
 
  if (x1 < (-dimensao_L) / 2 || x2 < (-dimensao_L) / 2)
  {
    printf("(FORA DO EXPERIMENTO)");
  }
 
  printf("\n");
  if (((a + b + c) % 3) == 0)
  {
    printf("FATO 1: DESAPARECIDA\n");
  }
  if ((c % 2 == 0) && c < (a + b))
  {
    printf("FATO 2: ORIGEM\n");
  }
 
  return 0;
}
