#include <stdio.h>
int main()
{
  int num, milhar, centena, dezena, unidade, ordem;
  scanf("%d", &num);

  if (num > 0 && num < 9999)
  {
    ordem = 0;
    if ((num / 1000) > 0)
    {
      milhar = num / 1000;
      if (ordem == 0)
      {
        printf("(quarta ordem) %d = ", num);
        ordem = 1;
      }
      if (milhar == 1)
      {
        printf("%d unidade de milhar", milhar);
      }
      else
      {
        printf("%d unidades de milhar", milhar);
      }
    }
    else
      milhar = 0;
    num = num - (milhar * 1000);
    if ((num / 100) > 0)
    {
      centena = num / 100;
      if (ordem == 0)
      {
        printf("(terceira ordem) %d = ", num);
        ordem = 1;
      }
      if (milhar > 0)
        printf(" + ");
      if (centena == 1)
      {
        printf("%d centena", centena);
      }
      else
      {
        printf("%d centenas", centena);
      }
    }

    else
      centena = 0;
    num = num - (centena * 100);
    if ((num / 10) > 0)
    {
      dezena = num / 10;
      if (ordem == 0)
      {
        printf("(segunda ordem) %d = ", num);
        ordem = 1;
      }
      if (centena > 0 || milhar > 0)
        printf(" + ");
      if (dezena == 1)
      {
        printf("%d dezena", dezena);
      }
      else
      {
        printf("%d dezenas", dezena);
      }
    }
    else
      dezena = 0;
    num = num - (dezena * 10);
    unidade = num;
    if ((unidade / 1) > 0)
    {
      unidade = num / 1;
      if (dezena > 0 || centena > 0 || milhar > 0)
        printf(" + ");
      if (ordem == 0)
      {
        printf("(primeira ordem) %d = ", num);
        ordem = 1;
      }
      if (unidade == 1)
      {
        printf("%d unidade", unidade);
      }
      else
      {
        printf("%d unidades", unidade);
      }
    }
    printf(" = ");
    if (milhar > 0)
      printf("%d + ", (milhar * 1000));
    if (centena > 0)

      printf("%d + ", (centena * 100));
    if (dezena > 0)

      printf("%d + ", (dezena * 10));
    if (unidade > 0)

      printf("%d", unidade);
    printf("\n");
  }
  else
  {
    printf("Numero invalido!\n");
  }
  return 0;
}