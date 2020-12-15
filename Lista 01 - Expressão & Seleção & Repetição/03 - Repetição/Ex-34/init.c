#include <stdio.h>
int main()
{
  int i, numeros, copy = 0;

  while (scanf("%d", &numeros) != EOF)
  {

    if (numeros <= 1)
    {
      printf("Fatoracao nao e possivel para o numero %d!\n", numeros);
      continue;
    }
    copy = numeros;
    printf("%d = ",
           numeros);
    for (i = 2; i <= numeros;)
    {

      if ((copy % i) == 0)
      {
        copy /= i;
        printf("%d", i);
        if (copy > 1)
        {
          printf(" x ");
        }

        i = 2;
      }

      else
      {
        if (copy == i)
        {
          printf("%d", i);
        }
        else
        {
          i++;
        }
      }
    }

    ;
  }
  printf("\n");
  return 0;
}