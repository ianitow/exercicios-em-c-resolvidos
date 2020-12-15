#include <stdio.h>
int main()
{
  ;
  float numeroInicial, iniciaEm, vaiAte, step, index, resultado;
  scanf("%f", &numeroInicial);
  scanf("%f", &iniciaEm);
  scanf("%f", &vaiAte);
  scanf("%f", &step);
  index = 0;
  if (numeroInicial > 0 && numeroInicial <= 9)
  {
    printf("Tabuada de soma:\n");
    while (index < vaiAte)
    {
      resultado = numeroInicial + (iniciaEm + step * index);
      printf("%.2f + %.2f = %.2f\n", numeroInicial, ((iniciaEm + step * index)), resultado);
      index++;
    }
    printf("Tabuada de subtracao:\n");
    index = 0;
    while (index < vaiAte)
    {

      resultado = numeroInicial - (iniciaEm + step * index);
      printf("%.2f - %.2f = %.2f\n", numeroInicial, ((iniciaEm + step * index)), resultado);
      index++;
    }
    printf("Tabuada de multiplicacao:\n");
    index = 0;
    while (index < vaiAte)
    {

      resultado = numeroInicial * (iniciaEm + step * index);
      printf("%.2f x %.2f = %.2f\n", numeroInicial, ((iniciaEm + step * index)), resultado);
      index++;
    }
    printf("Tabuada de divisao:\n");
    index = 0;
    while (index < vaiAte)
    {

      resultado = numeroInicial / (iniciaEm + step * index);
      printf("%.2f / %.2f = %.2f\n", numeroInicial, ((iniciaEm + step * index)), resultado);
      index++;
    }
  }
  return 0;
}