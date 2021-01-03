#include <stdio.h>

#include "complex.h"
#include <string.h>

void showUsageMode()
{
  printf("Wrong usage:\n\n");
  printf("cpbuild [OPTION] <complex_number_string> <file_name>\n\nOPTION:\n\t-a\t\tforma algébrica (default)\n\t-p\t\tforma polar/trigonométrica\n\t-v\t\tforma vetorial/geométrica\n<complex_number_string>:\n\ta+bi\t\tpara a forma algébrica\n\tr;theta\t\tpara a forma polar/trigonométrica\n\t[a,b]\t\t para a forma vetorial/geométrica\n<file_name>:\n\tnome do arquivo\n");
}

int main(int qntdArg, char **args)
{
  Complex *complexNumber = NULL;
  FILE *outfile;
  int typeNotDefined = 1;
  int defaultMode = 1;
  double real, img, rho, theta;

  if (qntdArg < 3 || qntdArg > 4)
  {
    showUsageMode();
  }

  else
  {
    if (args[1][0] == '-')
      typeNotDefined = 0;
    switch (args[1][1])
    {

    case 'p':
      sscanf(args[2], "%lf;%lf", &rho, &theta);

      real = rho * cos(theta * PI / 180) + 0.00; //Gambiarra para remover o - do 0;
      img = rho * sin(theta * PI / 180) + 0.00;

      break;
    case 'v':
      sscanf(args[2], "[%lf,%lf]", &real, &img);
      break;
    case 'a':
    default:
      //Para fazer a checagem de somente o termo 'i' estar especificado.
      if (strchr(args[2], 'i') != NULL)
      {
        img = 1;
      }
      sscanf(args[2], "%lf%lfi", &real, &img);
      break;
    }
    complexNumber = createComplex(real, img);
    if (args[3 - typeNotDefined] == NULL)
    {
      showUsageMode();
    }
    else
    {
      saveComplex(complexNumber, args[3 - typeNotDefined]);
    }
    free(complexNumber);
  }

  return 0;
}