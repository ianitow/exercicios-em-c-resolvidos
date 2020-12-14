#include <stdio.h>
int main()
{
  int CC, DR, RT, valorAco = 0;
  scanf("%d", &CC);
  scanf("%d", &DR);
  scanf("%d", &RT);
  if (CC < 7 && DR > 50 && RT > 80000)
  {
    valorAco = 10;
  }
  else
  {
    if (CC < 7 && DR > 50)
    {
      valorAco = 9;
    }
    else
    {
      if (CC < 7)
      {
        valorAco = 8;
      }
      else
      {
        valorAco = 7;
      }
    }
  }

  printf("ACO DE GRAU = %d\n", valorAco);
  return 0;
}