#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
  double u;
  double x;
  double y;
  double z;
  double norma;
} Vetor;

double calculateNorm(Vetor pontos)
{
  double norm;
  norm = sqrt(pow(pontos.u, 2) + pow(pontos.x, 2) + pow(pontos.y, 2) + pow(pontos.z, 2));
  norm = (norm < 0 ? norm *= -1 : norm);
  return norm;
}

void ordenaVetor(Vetor *pontos, int N)
{
  int i, swapped = 0;
  Vetor aux;
  do
  {
    swapped = 0;
    for (i = 0; i < N; i++)
    {
      if (i + 1 < N && pontos[i].norma > pontos[i + 1].norma)
      {
        aux = pontos[i + 1];
        pontos[i + 1] = pontos[i];
        pontos[i] = aux;
        swapped = 1;
      }
    }

  } while (swapped == 1);
}

int main()
{
  int i;
  int num;
  Vetor *pontos;
  scanf("%d", &num);
  pontos = malloc(num * sizeof(Vetor));
  for (i = 0; i < num; i++)
  {
    scanf("%lf%lf%lf%lf", &pontos[i].u, &pontos[i].x, &pontos[i].y, &pontos[i].z);
    pontos[i].norma = calculateNorm(pontos[i]);
  }
  ordenaVetor(pontos, num);
  for (i = 0; i < num; i++)
    printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", pontos[i].u, pontos[i].x, pontos[i].y, pontos[i].z, pontos[i].norma);

  return 0;
}