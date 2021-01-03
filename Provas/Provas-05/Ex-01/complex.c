#include "complex.h"

#include <stdlib.h>
#include <string.h>
#include <math.h>

Complex *createComplex(double real, double img)
{
  Complex *result = NULL;
  result = (Complex *)malloc(sizeof(Complex));
  if(!result){
  
  	printf("FALHA AO ALOCAR MEMORIA!!!\n");
 	exit(1);
  }
 
  strcpy(result->code, "CP");
  result->real = real;
  result->img = img;

  return (Complex *)result;
}
Complex *readComplex(char *input)
{
  FILE *inputFile;
  Complex *complexNumber = malloc(sizeof(Complex));
  inputFile = fopen(input, "r");
  if (inputFile == NULL)
  {
    fprintf(stderr, "ERROR IN OPEN FILE!!!\n");
    exit(1);
  }
  else
  {
    while (fread(complexNumber, sizeof(Complex), 1, inputFile))
      ;
    fclose(inputFile);
  }

  return complexNumber;
}
double calculateNorm(Complex c)
{
  return sqrt(pow(c.real, 2) + pow(c.img, 2));
}
void saveComplex(Complex *c, char *output)

{
  FILE *outfile;
  outfile = fopen(output, "w");
  if (outfile == NULL)
  {
    fprintf(stderr, "\nERROR IN OPEN FILE!!!\n");
    return;
  }
  fwrite(c, sizeof(Complex), 1, outfile);

  if (fwrite == 0)
  {
    printf("Error in file!!!\n");
    exit(1);
  }

  fclose(outfile);
}

Complex *csum(Complex a, Complex b)
{
  Complex *result = malloc(sizeof(Complex));

  result->real = a.real + b.real;
  result->img = a.img + b.img;
  return result;
}

Complex *csub(Complex a, Complex b)
{
  Complex *result = malloc(sizeof(Complex));

  result->real = a.real - b.real;
  result->img = a.img - b.img;
  return result;
}

Complex *cdiv(Complex a, Complex b)
{
  Complex *result = malloc(sizeof(Complex));

  result->real = (((a.real * b.real) + (a.img * b.img)) / (b.real * b.real + b.img * b.img));
  result->img = ((-(a.real * b.img) + (a.img * b.real)) / (b.real * b.real + b.img * b.img));
  return result;
}

Complex *cmul(Complex a, Complex b)
{
  Complex *result = malloc(sizeof(Complex));

  result->real = a.real * b.real - (a.img * b.img);
  result->img = a.real * b.img + (b.real * a.img);

  return result;
}
