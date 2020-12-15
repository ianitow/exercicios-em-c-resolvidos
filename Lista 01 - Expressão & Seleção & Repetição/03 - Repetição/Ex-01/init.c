#include <stdio.h>
#include <stdlib.h>
int main()
{
  int index, teste, pessoas;
  double popular, geral, arquibancada, cadeiras, renda;
  scanf("%d", &teste);
  index = 0;
  if (teste > 0)
  {
    while (index < teste)
    {
      scanf("%d %lf %lf %lf %lf", &pessoas, &popular, &geral, &arquibancada, &cadeiras);
      if (popular > 0 && geral > 0 && arquibancada > 0 && cadeiras > 0)
      {
        popular = pessoas * (popular / 100.00);
        geral = pessoas * (geral / 100.00);
        arquibancada = pessoas * (arquibancada / 100.00);
        cadeiras = pessoas * (cadeiras / 100.00);

        renda = popular * 1.0 + geral * 5.0 + arquibancada * 10.0 + cadeiras * 20.0;
        printf("A RENDA DO JOGO N. %d E = %.2f\n", (index + 1), renda);
        index++;
      }
    }
  }
  return 0;
}