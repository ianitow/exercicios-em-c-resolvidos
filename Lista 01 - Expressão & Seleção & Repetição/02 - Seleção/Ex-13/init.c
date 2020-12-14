#include <stdio.h>
int main()
{
  int entrada1, entrada2, entrada3, entrada4, primeiroMenor, segundoMenor, terceiroMenor, quartoMenor;
  scanf("%d", &entrada1);
  scanf("%d", &entrada2);
  scanf("%d", &entrada3);
  scanf("%d", &entrada4);

  if (entrada1 < entrada2)
  {
    primeiroMenor = entrada1;
    segundoMenor = entrada2;
  }
  else
  {
    primeiroMenor = entrada2;
    segundoMenor = entrada1;
  }
  if (entrada3 < primeiroMenor)
  {
    terceiroMenor = segundoMenor;
    segundoMenor = primeiroMenor;
    primeiroMenor = entrada3;
  }
  else
  {
    if (entrada3 < segundoMenor)
    {
      quartoMenor = terceiroMenor;
      terceiroMenor = segundoMenor;
      segundoMenor = entrada3;
    }
    else
    {
      if (entrada3 < terceiroMenor)
      {
        quartoMenor = terceiroMenor;
        terceiroMenor = entrada3;
      }
      else
      {
        quartoMenor = entrada3;
      }
    }
  }
  if (entrada4 < primeiroMenor)
  {
    terceiroMenor = segundoMenor;
    segundoMenor = primeiroMenor;
    primeiroMenor = entrada4;
  }
  else
  {
    if (entrada4 < segundoMenor)
    {
      quartoMenor = terceiroMenor;
      terceiroMenor = segundoMenor;
      segundoMenor = entrada4;
    }
    else
    {
      if (entrada4 < terceiroMenor)
      {
        quartoMenor = terceiroMenor;
        terceiroMenor = entrada4;
      }
      else
      {
        quartoMenor = entrada4;
      }
    }
  }

  printf("%d\n", (primeiroMenor + segundoMenor + terceiroMenor));
  return 0;
}