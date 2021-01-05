#include "complex.h"
#include <stdio.h>
#include <string.h>

void showUsageMode()
{
  printf("Wrong usage:\n\n");
  printf("cpview [OPTION] <file_name>\n\nOPTION:\n\t-a\t\tforma algébrica (default)\n\t-p\t\tforma polar/trigonométrica\n\t-v\t\tforma vetorial/geométrica\n<file_name>:\n\tnome do arquivo\n");
}

int main(int qntdArg, char **args)
{
  char mode = 'a';
  int typeIsNotDefined = 1;

  double absolute, rad;

  Complex *complexNumber = NULL;

  if (qntdArg <= 1 || qntdArg > 3)
  {

    showUsageMode();
  }
  else
  {

    if (args[1][0] == '-')
    {
      mode = args[1][1];
      typeIsNotDefined = 0;
    }
    complexNumber = readComplex(args[2 - typeIsNotDefined]);
    switch (mode)
    {
    case 'p':
      absolute = calculateNorm(*complexNumber);
      rad = atan2(complexNumber->img, complexNumber->real) * 180 / PI;
      printf("%.2lf;%.2lf", absolute, rad);

      break;
    case 'v':
      printf("[%.2lf,%.2lf]", (complexNumber->real), complexNumber->img + 0.0);
      break;
    case 'a':
      printf("%.2lf", (floor(1000 * complexNumber->real) / 1000));
      if (floor(1000 * complexNumber->img) / 1000 > 0 || floor(1000 * complexNumber->img) / 1000 < 0)
      {
        printf("%+.2lfi", (floor(1000 * complexNumber->img) / 1000));
      }
    default:
      break;
    }
    printf("\n");
    free(complexNumber);
  }
  return 0;
}