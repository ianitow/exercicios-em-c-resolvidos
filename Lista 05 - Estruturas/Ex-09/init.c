#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  double numerador;
  double denominador;
} Fracao;
void printEquivalents(Fracao *f, int qntd)

{
  int i, j, isEqual = 0;
  for (i = 0; i < qntd; i++)
  {

    double valueOne = (f[i].numerador / f[i].denominador);
    for (j = i + 1; j < qntd; j++)
    {
      double valueTwo = f[j].numerador / f[j].denominador;

      if (valueOne == valueTwo)
      {
        isEqual++;
        printf("%d/%d equivalente a %d/%d\n", (int)f[i].numerador, (int)f[i].denominador, (int)f[j].numerador, (int)f[j].denominador);
      }
    }
  }
  if (isEqual == 0)
  {
    printf("Nao ha fracoes equivalentes na sequencia\n");
  }
}

int main()
{
  Fracao **fracoes;
  int i, casesTest, qntdFractions, j;
  scanf("%d", &casesTest);
  fracoes = malloc(casesTest * sizeof(Fracao));
  char lastCaracter;

  for (i = 0; i < casesTest; i++)
  {
    j = 0;

    fracoes[i] = malloc(sizeof(Fracao));
    while (scanf("%lf/%lf%c", &fracoes[i][j].numerador, &fracoes[i][j].denominador, &lastCaracter) != EOF)
    {

      if (lastCaracter == '\n')
        break;
      j++;
      fracoes[i] = realloc(fracoes[i], (j + 1) * sizeof(Fracao));
    }
    printf("Caso de teste %d\n", i + 1);
    printEquivalents(fracoes[i], j + 1);
  }

  for (i = 0; i < casesTest; i++)
    free(fracoes[i]);
  free(fracoes);
  return 0;
}
