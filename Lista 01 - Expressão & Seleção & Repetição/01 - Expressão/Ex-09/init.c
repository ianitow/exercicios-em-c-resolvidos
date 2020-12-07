#include <stdio.h>
#include <math.h>
int main()
{
  float valor, primeiraCasa, segundaCasa, terceiraCasa;
  scanf("%f", &valor);
  primeiraCasa = (int)valor + round((valor - (int)valor) * 10) / 10;
  segundaCasa = (int)valor + round((valor - (int)valor) * 100) / 100;
  terceiraCasa = (int)valor + round((valor - (int)valor) * 1000) / 1000;
  printf("%.6f\n%.6f\n%.6f", primeiraCasa, segundaCasa, terceiraCasa);
  return 0;
}