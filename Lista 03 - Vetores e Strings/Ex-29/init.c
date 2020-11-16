#include <stdio.h>
#include <math.h>
void removeLowers(int *nums, int qntd, int range)
{
  int removeds[qntd];
  int min;
  int indice;
  int i = 0;

  while (qntd)
  {
    min = pow(10, range);
    indice = 0;
    for (i = 0; i < range; i++)
    {

      if (nums[i] < min && nums[i] != -1)
      {
        min = nums[i];
        indice = i;
      }
    }
    nums[indice] = -1;
    qntd--;
  }
  for (i = 0; i < range; i++)
  {
    if (nums[i] != -1)
    {
      printf("%d", nums[i]);
    }
  }
  printf("\n");
}
int main()
{
  int totalNumeros, qntdRemover, i, numero;
  int *result;
  while (1)
  {
    scanf("%d %d", &totalNumeros, &qntdRemover);
    int v[totalNumeros];
    if (totalNumeros == 0 && qntdRemover == 0)
    {
      break;
    }
    scanf("%d", &numero);
    i = totalNumeros - 1;
    while (numero != 0)
    {
      v[i] = numero % 10;
      numero /= 10;
      i--;
    }

    removeLowers(v, qntdRemover, totalNumeros);
  }

  return 0;
}