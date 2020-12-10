#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
  double u;
  double x;
  double y;
  double z;
} Ponto4D;

double calculateDistance(Ponto4D element1, Ponto4D element2)
{
  double result = 0;
  result = pow(element1.u - element2.u, 2) + pow(element1.x - element2.x, 2) + pow(element1.y - element2.y, 2) + pow(element1.z - element2.z, 2);
  return sqrt(result);
}

int main()
{
  Ponto4D *pontos;
  int i, num;
  scanf("%d", &num);
  pontos = malloc(num * sizeof(Ponto4D));
  for (i = 0; i < num; i++)
  {
    scanf("%lf %lf %lf %lf", &pontos[i].u, &pontos[i].x, &pontos[i].y, &pontos[i].z);
  }
  for (i = 0; i < num; i++)
  {
    if (i + 1 < num)
    {
      printf("%.2lf\n", calculateDistance(pontos[i], pontos[i + 1]));
    }
    else
    {
      break;
    }
  }

  return 0;
}