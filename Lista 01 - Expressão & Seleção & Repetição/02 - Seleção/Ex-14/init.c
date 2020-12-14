#include <stdio.h>
int main()
{

  int data, dia, mes, ano;
  scanf("%d", &data);
  ano = data % 10000;
  data = data / 10000;
  mes = data % 100;
  data = data / 100;
  dia = data;

  if ((mes == 02 && !(data <= 28)) || (ano > 9999) || mes <= 0 || mes > 12 || dia <= 0 || dia > 31 || ano <= 0)
  {
    printf("Data invalida!\n");
    return 0;
  }
  if (dia == 31 && (mes != 1 && mes != 3 && mes != 5 && mes != 7 && mes != 8 && mes != 10 && mes != 12))
  {
    printf("Data invalida!\n");
    return 0;
  }
  if (data > 999999 || (dia < 10 || mes < 10))
  {

    printf("%d de ", dia);

    if (mes == 1)
      printf("janeiro");
    if (mes == 2)

      printf("fevereiro");
    if (mes == 3)

      printf("março");
    if (mes == 4)

      printf("abril");
    if (mes == 5)

      printf("maio");
    if (mes == 6)

      printf("junho");
    if (mes == 7)

      printf("julho");
    if (mes == 8)

      printf("agosto");
    if (mes == 9)

      printf("setembro");
    if (mes == 10)

      printf("outubro");
    if (mes == 11)

      printf("novembro");
    if (mes == 12)
      printf("dezembro");
    if (ano < 10)
    {
      printf(" de 000%d\n", ano);
    }
    else
    {
      if (ano < 100)
      {
        printf(" de 00%d\n", ano);
      }
      else
      {

        if (ano < 1000)
        {
          printf(" de 0%d\n", ano);
        }
        else
        {
          printf(" de %d\n", ano);
        }
      }
    }
  }
  else
  {
    printf("Data invalida!\n");
  }
  return 0;
}