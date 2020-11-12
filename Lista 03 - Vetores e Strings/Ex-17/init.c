#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
  int qntd, i, j, encontrado = 0;
  char procura;
  char fraseCompleta[499];
  char frase[499];
  scanf("%d", &qntd);

  for (i = 0; i < qntd; i++)
  {
    scanf("%*c%c", &procura);
    scanf("%*c%[^\n]", fraseCompleta);
    encontrado = 0;
    for (j = 0; fraseCompleta[j] != '\0'; j++)
    {
      if (fraseCompleta[j] == procura)
      {
        printf("Caractere %c encontrado no indice %d da string.\n", procura, j);
        encontrado = 1;
        break;
        ;
      }
    }
    if (encontrado == 0)
    {
      printf("Caractere %c nao encontrado.\n", procura);
    }
  }

  return 0;
}