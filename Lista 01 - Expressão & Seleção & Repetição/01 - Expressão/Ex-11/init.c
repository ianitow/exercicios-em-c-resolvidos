#include <stdio.h>
int main()
{
  float valor, margemFabricante, impostoEhRoubo, valorFinal;
  scanf("%f", &valor);
  scanf("%f", &margemFabricante);
  scanf("%f", &impostoEhRoubo);
  valorFinal = valor + (valor * (margemFabricante / 100)) + (valor * (impostoEhRoubo / 100));
  printf("O VALOR DO CARRO E = %.2f\n", valorFinal);
  return 0;
}