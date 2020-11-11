#include <stdio.h>
/*
Escreva um programa que leia vários números inteiros positivos na base decimal e escreva os valores
correspondentes desses números na base binária.
*/
int decimalToBinary(int number)
{
  int binaryNum[32];
  int i = 0, j;

  while (number > 0)
  {

    binaryNum[i] = number % 2;
    number = number / 2;
    i++;
  }

  for (j = i - 1; j >= 0; j--)
  {
    printf("%d", binaryNum[j]);
  }

  printf("\n");
}

int main()
{
  int num;
  while (scanf("%d", &num) != EOF)
  {
    if (num == 0)
    {
      printf("%d\n", 0);
    }
    else
    {
      decimalToBinary(num);
    }
  }
  return 0;
}