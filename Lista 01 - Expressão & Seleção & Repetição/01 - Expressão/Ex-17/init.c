#include <stdio.h>
int main()
{
  int valor, notaCem, notaCiquenta, notaDez, notaUm;
  scanf("%d", &valor);
  notaCem = valor / 100;
  notaCiquenta = (valor % 100) / 50;
  notaDez = ((valor % 100) % 50) / 10;
  notaUm = (((valor % 100) % 50) % 10) / 1;
  printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", notaCem, notaCiquenta, notaDez, notaUm);
  return 0;
}