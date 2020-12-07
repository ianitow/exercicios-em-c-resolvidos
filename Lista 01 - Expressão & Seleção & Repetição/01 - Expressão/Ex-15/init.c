#include <stdio.h>
int main()
{
  int valorDecimal;
  int incWhile, incFor = 0;
  int valorBin[8];
  scanf("%d", &valorDecimal);
  if (0 <= valorDecimal && valorDecimal <= 255)
  {
    incWhile = 0;
    while (incWhile < 8)
    {
      valorBin[incWhile] = valorDecimal % 2;
      valorDecimal /= 2;
      incWhile++;
    }
    for (incFor = incWhile - 1; incFor >= 0; incFor--)
      printf("%d", valorBin[incFor]);
  }
  else
  {
    printf("Numero invalido!\n");
    return 0;
  }
  return 0;
}