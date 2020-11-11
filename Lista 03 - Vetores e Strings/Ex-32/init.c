#include <stdio.h>
int isElementInside(int *array, int el, int range)
{
  int i;
  for (i = 0; i < range; i++)
  {
    if (array[i] == el)
    {
      return 1;
    }
  }
  return 0;
}
int main()
{
  int i, j, num;
  int sorteadas[6];
  int qntdTestes;
  int totalQntdQuadra = 0;
  int totalQntdQuina = 0;
  int totalQntdSena = 0;
  for (i = 0; i < 6; i++)
  {
    scanf("%d", &num);
    sorteadas[i] = num;
  }
  scanf("%d", &qntdTestes);
  if (qntdTestes >= 1 && qntdTestes <= 50000)
  {
    for (i = 0; i < qntdTestes; i++)
    {
      int achou = 0;
      for (j = 0; j < 6; j++)
      {
        scanf("%d", &num);
        if (isElementInside(sorteadas, num, 6))
        {
          achou++;
        }
      }
      if (achou == 4)
      {
        totalQntdQuadra++;
      }
      else if (achou == 5)
      {
        totalQntdQuina++;
      }
      else if (achou == 6)
      {
        totalQntdSena++;
      }
    }
  }

  if (totalQntdSena > 0)
    printf("Houve %d acertador(es) da sena\n", totalQntdSena);
  else
    printf("Nao houve acertador para sena\n");
  if (totalQntdQuina > 0)
    printf("Houve %d acertador(es) da quina\n", totalQntdQuina);
  else
    printf("Nao houve acertador para quina\n");
  if (totalQntdQuadra > 0)
    printf("Houve %d acertador(es) da quadra\n", totalQntdQuadra);
  else
    printf("Nao houve acertador para quadra\n");

  return 0;
}