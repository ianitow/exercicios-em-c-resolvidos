//17:09
//17:55

#include <stdio.h>
#include <math.h>
int main()
{

  double DESPESA_FIXA = 200, VALOR_PER_INGRESSO = 0.05, INGRESSOS_INICIAL = 120;
  double i;
  double valorIngresso, valorInicial, valorFinal;
  double lucro;

  double melhorLucro = 0, melhorValor = 0;
  int melhorNumero = 0;
  int ingressosVendidos;

  scanf("%lf %lf %lf", &valorIngresso, &valorInicial, &valorFinal);
  if (valorInicial >= valorFinal)
    printf("INTERVALO INVALIDO\n");

  for (i = valorInicial; i <= valorFinal; i++)
  {
    if (i <= valorIngresso)
    {
      ingressosVendidos = (valorIngresso - i) * 50 + INGRESSOS_INICIAL;
    }
    else
    {
      ingressosVendidos = (valorIngresso - i) * 60 + INGRESSOS_INICIAL;
    }
    lucro = (ingressosVendidos * i - (ingressosVendidos * VALOR_PER_INGRESSO) - DESPESA_FIXA);
    if (lucro > melhorLucro)
    {
      melhorLucro = lucro;
      melhorNumero = ingressosVendidos;
      melhorValor = i;
    }
    printf("V: %.2f, N: %d, L: %.2f\n", i, ingressosVendidos, lucro);
  }
  printf("Melhor valor final: %.2f\nLucro: %.2f\nNumero de ingressos: %d\n", melhorValor, melhorLucro, melhorNumero);

  return 0;
}