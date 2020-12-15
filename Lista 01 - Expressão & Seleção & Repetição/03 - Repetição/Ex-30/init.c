#include <stdio.h>
int main()
{
  int encontrados = 0;
  int n, i, r, entrada;
  int somaNumeroGrande;
  int somaNumeroPequeno;
  scanf("%d", &entrada);
  if (entrada < 9)
  {
    for (n = 2; encontrados < entrada; n++)
    {
      somaNumeroGrande = 1;
      somaNumeroPequeno = 1;

      for (i = 2; i < n; i++)
      {
        if (n % i == 0)
          somaNumeroPequeno += i;
      }

      if (somaNumeroPequeno != n)
        for (i = 2; i < somaNumeroPequeno; i++)
        {
          if (somaNumeroPequeno % i == 0)
            somaNumeroGrande += i;
        }

      if (somaNumeroGrande == n)
      {
        if (n < somaNumeroPequeno)
        {
          printf("(%d,%d)\n", n, somaNumeroPequeno);
          encontrados++;
        }
      }
    }
  }
  return 0;
}