#include <stdio.h>
#include <math.h>
int main()
{
  double mediaPar = 0, mediaImpar = 0;
  long int numeros, qntdPar = 0, qntdImpar = 0;

  while (1)
  {

    scanf("%ld", &numeros);
    if (numeros == 0)
    {
      break;
    }
    if ((numeros % 2) == 0)
    {
      mediaPar += numeros;
      qntdPar++;
    }
    else
    {
      if (numeros % 3 == 0)
      {
        mediaImpar += numeros;
        qntdImpar++;
      }
      else
      {
        mediaImpar += numeros;
        qntdImpar++;
      }
    }
  };
  if (qntdPar == 0)
  {
    mediaPar = 0;
  }
  else
  {
    mediaPar /= qntdPar;
  }
  if (qntdImpar == 0)
  {
    mediaImpar = 0;
  }
  else
  {
    mediaImpar /= qntdImpar;
  }

  printf("MEDIA PAR: %.6f\nMEDIA IMPAR: %.6f\n",
         mediaPar, mediaImpar);
  return 0;
}