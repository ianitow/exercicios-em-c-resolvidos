#include <stdio.h>
#include <math.h>
int main()
{
  char *final;
  int numero_sequencial, uf, i, il, qntd = 0, c_numero_sequencial, numero;
  int soma = 0;
  int copy_uf;
  int aux = 0;
  int digitoverificador = 0;
  int qntd_uf = 0;
  scanf("%d %d", &numero_sequencial, &uf);
  if (numero_sequencial <= 0)
  {
    return 0;
  }
  if (uf > 28 || uf <= 0)
  {
    printf("CODIGO DA UF INVALIDO!\n");
    return 0;
  }
  c_numero_sequencial = numero = numero_sequencial;
  copy_uf = uf;
  while (c_numero_sequencial != 0)
  {
    qntd = qntd + 1;
    c_numero_sequencial /= 10;
  }
  //Faz a multiplicação;
  il = qntd;
  for (i = 10 - qntd; i <= 9; i++)
  {
    soma += numero / (int)pow(10, il - 1) * i;
    numero = numero % (int)pow(10, il - 1);
 
    il--;
  }
 
  if (soma % 11 == 10)
    digitoverificador = 0;
  else
  {
    digitoverificador = soma % 11;
  }
 
  if (uf < 10)
  {
    aux = uf * 8;
  }
  else
  {
    aux = (uf / 10) * 7;
 
    aux += (uf % 10) * 8;
  }
  aux += digitoverificador * 9;
  aux = aux % 11;
 
  if (uf < 10)
  {
    printf("%d0%d/", numero_sequencial, uf);
    if ((digitoverificador + aux) < 10)
    {
      printf("0%d", (digitoverificador + aux));
    }
    else
    {
      printf("%d", (digitoverificador + aux));
    }
  }
  else
  {
    printf("%d%d/", numero_sequencial, uf);
    if ((digitoverificador + aux) < 10)
    {
      printf("%d%d", digitoverificador, aux);
    }
    else
    {
 
      printf("%d%d", digitoverificador, aux);
    }
  }
  printf("\n");
  return 0;
}
