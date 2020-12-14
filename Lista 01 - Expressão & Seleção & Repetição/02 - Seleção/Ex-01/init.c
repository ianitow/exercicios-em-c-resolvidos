#include <stdio.h>
#include <math.h>
int main()
{
  float notaUm, notaDois, notaTres, media;
  scanf("%f %f %f", &notaUm, &notaDois, &notaTres);
  media = (notaUm + notaDois + notaTres) / 3;
  printf("MEDIA = %.2f\n", media);
  if (media >= 6)
  {
    printf("APROVADO\n");
  }
  else
  {
    printf("REPROVADO\n");
  }
  return 0;
}