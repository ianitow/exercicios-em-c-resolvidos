#include <stdio.h>

int verificaCPF(int *cpf)
{
  int i, result = 0;
  int b1 = -1, b2 = -1;
  for (i = 0; i < 11; i++)
  {
    result += cpf[i];
  }
  if (result % 11 == 0)
  {
    result = 0;
    for (i = 0; i < 9; i++)
    {
      result += cpf[i] * i + 1;
    }
    if (result % 11 == 10)
    {
      b1 = 0;
    }
    else if (result % 11 >= 0 || result % 11 <= 9)
    {
      b1 = result % 11;
    }
    else
    {
      return 0;
    }
    result = 0;
    for (i = 0; i < 9; i++)
    {
      result += cpf[i] * (9 - i);
    }
    if (result % 11 == 10)
    {
      b1 = 0;
    }
    else if (result % 11 >= 0 || result % 11 <= 9)
    {
      b1 = result % 11;
    }
    else
    {
      return 0;
    }
    return 1;
  }
  return 0;
}

int main()
{
  int N, i;
  int v[11];
  scanf("%d", &N);
  while (N--)
  {
    for (i = 0; i < 11; i++)
    {
      scanf("%d", &v[i]);
    }
    if (verificaCPF(v))
    {
      printf("CPF valido\n");
    }
    else
    {
      printf("CPF invalido\n");
    }
  }
  return 0;
}