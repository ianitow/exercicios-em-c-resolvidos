#include <stdio.h>
int main()
{
  float TAXA_ANUAL_CRESCIMENTO_A = 0.03;
  float TAXA_ANUAL_CRESCIMENTO_B = 0.015;
  int habitantes_a, habitantes_b;
  int anos = 0;
  scanf("%d", &habitantes_a);
  scanf("%d", &habitantes_b);

  while (habitantes_a <= habitantes_b)
  {
    habitantes_a = habitantes_a + (habitantes_a * TAXA_ANUAL_CRESCIMENTO_A);

    habitantes_b = habitantes_b + (habitantes_b * TAXA_ANUAL_CRESCIMENTO_B);
    anos++;
  }
  printf("ANOS = %d\n", anos);

  return 0;
}