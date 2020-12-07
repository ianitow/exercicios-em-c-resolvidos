#include <stdio.h>
#include <math.h>
int main()
{
  float altura, arestaHexagono;
  double volumePiramide, areaHexagono;
  scanf("%f %f", &altura, &arestaHexagono);
  areaHexagono = (3 * (arestaHexagono * arestaHexagono) * sqrt(3)) / 2;
  volumePiramide = ((float)1 / (float)3) * areaHexagono * altura;
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volumePiramide);
  return 0;
}