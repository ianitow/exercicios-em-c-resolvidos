#include <stdio.h>
#include <math.h>
int main()
{
  int horas, minutos, segundos, total;
  scanf("%d", &horas);
  scanf("%d", &minutos);
  scanf("%d", &segundos);
  total = (horas * 3600) + (minutos * 60) + segundos;
  printf("O TEMPO EM SEGUNDOS E = %d\n", total);
  return 0;
}