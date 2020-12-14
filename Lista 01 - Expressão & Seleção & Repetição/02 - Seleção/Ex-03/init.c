#include <stdio.h>
int main()
{
  int u;
  char tipo;
  float consumo, v, taxa, custoPorMetroCubico;

  scanf("%d %f %c", &u, &consumo, &tipo);
  if (tipo == 'R')
  {
    taxa = 5.00;
    custoPorMetroCubico = 0.05;
    v = consumo * custoPorMetroCubico + taxa;
  }
  if (tipo == 'C')
  {
    taxa = 500.00;
    if (consumo > 0 && consumo > 80)
    {
      custoPorMetroCubico = 0.25;
      consumo -= 80;
      v = consumo * custoPorMetroCubico + taxa;
    }
    else
    {
      v = taxa;
    }
  }
  if (tipo == 'I')
  {
    taxa = 800.00;
    if (consumo > 0 && consumo > 100)
    {
      custoPorMetroCubico = 0.04;
      consumo -= 100;
      v = consumo * custoPorMetroCubico + taxa;
    }
    else
    {
      v = taxa;
    }
  }
  printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", u, v);
  return 0;
}