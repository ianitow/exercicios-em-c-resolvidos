#include <stdio.h>
/*
  Dada uma sequência de N notas entre 0 e 10, escreva um programa que exiba o valor da última nota
  informada e quantas vezes ela apareceu no conjunto. O programa deve exibir ainda a maior nota informada
  e a posição (índice do vetor) da sua primeira ocorrência
*/

int oftenOccurs(int *elements, int el)
{
  int i, ocurrence = 0;
  for (i = 0; elements[i] != -1; i++)
  {
    if (elements[i] == el)
      ocurrence++;
  }
  return ocurrence;
}

int main()
{
  int valores[10000];
  int maiorValor, indice;
  int N, QNTD;
  int i = 0, j;
  scanf("%d", &QNTD);

  while (i < QNTD)
  {
    scanf("%d", &N);
    if (N >= 0 && N <= 10)
    {
      if (N > maiorValor)
      {
        maiorValor = N;
        indice = i;
      }
      valores[i] = N;
      i++;
    }
  }
  valores[i] = -1;

  printf("Nota %d, %d vezes\n", valores[i - 1], oftenOccurs(valores, valores[i - 1]));
  printf("Nota %d, indice %d\n", maiorValor, indice);
  return 0;
}