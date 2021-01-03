#include "complex.h"
#include <stdio.h>
#include <string.h>

void showUsageMode()
{
  printf("Wrong usage:\n\n");
  printf("cpmult <file_name_1> <file_name_2> <file_name_out>\n");
}

int main(int qntdArg, char **args)
{
  if (qntdArg != 4)
  {
    showUsageMode();
  }
  else
  {
    Complex *a = readComplex(args[1]);
    Complex *b = readComplex(args[2]);
    Complex *result = cmul(*a, *b);
    saveComplex(result, args[3]);
    free(result);
  }
  return 0;
}