#include <stdio.h>
#include <ctype.h>

int main()
{
  int qntdFrases, i, j = 0, vogal = 0, total = 0, consoante = 0;
  char frases[10000];
  scanf("%d%*c", &qntdFrases);
  for (i = 0; i < qntdFrases; i++)
  {
    scanf("%[^\n]%*c", frases);

    while (frases[j] != '\0')
    {

      switch (tolower(frases[j]))
      {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        vogal++;
        total++;
        break;
      case 'b':
      case 'c':
      case 'd':
      case 'f':
      case 'g':
      case 'h':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
        consoante++;
        total++;
        break;

      default:
        break;
      }
      j++;
    }
    printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", total, vogal, consoante);
    j = 0, vogal = 0, total = 0, consoante = 0;
  }

  return 0;
}